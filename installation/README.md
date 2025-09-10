# HashSource Python Installer

A standalone Python script for installing HashSource firmware on Antminer S19 Pro devices.

## Prerequisites

### System Requirements

- Python 3.7 or higher
- Keystone Engine library installed on the system

### Installing Keystone Engine

The Keystone Engine is required for ARM assembly operations:

```bash
# Download and extract Keystone
wget https://github.com/keystone-engine/keystone/archive/refs/tags/0.9.2.tar.gz
tar -xzf 0.9.2.tar.gz
cd keystone-0.9.2

# Build and install
mkdir build && cd build
../make-share.sh
make -j8
sudo make install

# Install Python bindings
pip install keystone-engine
```

### Python Dependencies

Install required Python packages:

```bash
pip install -r requirements.txt
```

Or manually:

```bash
pip install paramiko requests keystone-engine
```

## Usage

### Basic Installation

Install on a single device with default settings:

```bash
./install_hashsource.py 192.168.1.100
```

### Multiple Devices

Install on multiple devices:

```bash
./install_hashsource.py 192.168.1.100 192.168.1.101 192.168.1.102
```

Install from a file containing IP addresses:

```bash
./install_hashsource.py devices.txt
```

### Custom Parameters

Specify custom frequency and voltage:

```bash
./install_hashsource.py 192.168.1.100 -f 650 -v 1350
```

Control parallel installations (default is 5):

```bash
./install_hashsource.py devices.txt -t 10
```

### Command Line Options

```
usage: install_hashsource.py [-h] [-f FREQUENCY] [-v VOLTAGE] [-t THREADS] hosts [hosts ...]

Install HashSource firmware on Antminer S19 Pro devices

positional arguments:
  hosts                 Device IP addresses or file with IPs (one per line)

optional arguments:
  -h, --help            show this help message and exit
  -f FREQUENCY, --frequency FREQUENCY
                        Target frequency in MHz (default: 600)
  -v VOLTAGE, --voltage VOLTAGE
                        Target voltage in mV (default: 1300)
  -t THREADS, --threads THREADS
                        Number of parallel installations (default: 5)
```

## Installation Process

The installer performs the following steps:

1. **SSH Connection**: Connects to device using default credentials (miner/miner)
2. **Compatibility Check**: Verifies device is Antminer S19 Pro and not already running HashSource
3. **Privilege Escalation**: Gains sudo access through daemonc exploitation
4. **Pool Configuration**: Sets up mining pool (Ocean pool by default)
5. **System Preparation**: Creates update endpoints and modifies system files
6. **Binary Patching**: Uses Keystone to generate ARM opcodes for frequency/voltage
7. **Upload & Install**: Transfers patched bmminer and installs it
8. **Service Restart**: Restarts the mining service

## Binary Patching Details

The installer patches the following offsets in the bmminer binary:

- **Frequency**: 0x24F58, 0x24A20
- **Voltage**: 0x24C24, 0x24C28
- **Fan Check Bypass**: 0x3DFC, 0x3ED4
- **Logging**: 0x50354, 0x3E78

The script uses Keystone Engine to properly assemble ARM instructions, with a fallback to manual encoding if Keystone fails.

## Important Files

- `bmminer_no_fan_check`: Required template binary (must be in same directory)
- `devices.txt`: Optional file containing target IP addresses

## Pool Configuration

Default pool settings:

- URL: `stratum+tcp://mine.ocean.xyz:3334`
- Wallet: `1GRfspGGx4Ne66YotWuosUc4WeJLfGE3dZ`
- Worker: Device MAC address

To change pool settings, modify the constants at the top of the script:

```python
POOL_URL = "your_pool_url"
POOL_WALLET = "your_wallet_address"
```

## Troubleshooting

### Keystone Import Error

If you get `ImportError: cannot import name 'Ks' from 'keystone'`:

1. Ensure Keystone library is installed: `sudo ldconfig`
2. Reinstall Python bindings: `pip install --force-reinstall keystone-engine`

### SSH Connection Failed

- Verify device is accessible: `ping <device_ip>`
- Check SSH is enabled on device
- Confirm credentials haven't been changed from defaults

### Binary Template Not Found

Ensure `bmminer_no_fan_check` file exists in the same directory as the script.

### Installation Summary

After running, the script provides a summary:

- Lists successful installations
- Lists failed installations
- Returns exit code 0 if all successful, 1 if any failures

## Security Notice

This tool performs system modifications including:

- Privilege escalation through sudoers modification
- Binary patching to bypass safety features
- Remote code execution via SSH

Use only on devices you own and have permission to modify.
