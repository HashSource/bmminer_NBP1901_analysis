import sys
from keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM


if sys.argv[1]:
    if sys.argv[1] == "-h":
        print("[-] usage custom_freq_voltage.py frequency voltage")
        exit(1)

frequency_offset_1 = 0x0024F58
frequency_offset_2 = 0x24A20
voltage_offset_1 = 0x24C24
voltage_offset_2 = 0x24C28


def get_opcodes(value, register):
    arm_code = "mov " + register + ", " + value
    ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)

    ARM_BYTECODE, _ = ks.asm(arm_code)

    return bytes(ARM_BYTECODE)


## get opcodes for voltage
frequency_opcode = get_opcodes(sys.argv[1], "r2")
print(frequency_opcode)

## get opcodes for frequency
voltage_opcode = get_opcodes(sys.argv[2], "r0")
print(voltage_opcode)


## write changes to file
with open("bmminer", "r+b") as f:
    f.seek(voltage_offset_1)
    ## patching 2 times voltage
    f.write(bytes(voltage_opcode))  # mov r2, voltage
    f.write(bytes(voltage_opcode))  # mov r2, voltage

    f.seek(frequency_offset_1)
    f.write(bytes(frequency_opcode))  # mov r0. frequency

    f.seek(frequency_offset_2)
    f.write(bytes(frequency_opcode))  # mov r0. frequency
