import sys
from keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM


if sys.argv[1]:
    if sys.argv[1] == "-h":
        print("[-] usage custom_freq_voltage.py frequency voltage")
        exit(1)

frequency_offset_1 = 0x0024F58
frequency_offset_2 = 0x24a20
voltage_offset_1 = 0x24c24
voltage_offset_2 = 0x24c28
disable_fans_offset1 = 0x3dfc
disable_fans_offset2 = 0x3ed4

disable_conti_log = 0x50354
disable_conti_log_2 = 0x3e78

def get_opcodes(value,register):

    arm_code = "mov "+register+", "+value
    ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)

    ARM_BYTECODE, _ = ks.asm(arm_code)

    return bytes(ARM_BYTECODE)





## get opcodes for voltage
frequency_opcode = get_opcodes(sys.argv[1],"r2")
print(frequency_opcode)

## get opcodes for frequency
voltage_opcode = get_opcodes(sys.argv[2],"r0")
print(voltage_opcode)




## write changes to file
with open("bmminer","r+b") as f:
    f.seek(voltage_offset_1)
    ## patching 2 times voltage
    f.write(bytes(voltage_opcode)) # mov r2, voltage
    f.write(bytes(voltage_opcode)) # mov r2, voltage

    f.seek(frequency_offset_1)
    f.write(bytes(frequency_opcode)) # mov r0. frequency


    f.seek(frequency_offset_2)
    f.write(bytes(frequency_opcode)) # mov r0. frequency


    ## patching fans function
    f.seek(disable_fans_offset1)
    f.write(b"\x00")

    f.seek(disable_fans_offset2 + 3) ## change bls to bl
    f.write(b"\xEB")

    ## disable conti log
    f.seek(disable_conti_log)
    f.write(b"\x00\x00\x00")
    f.seek(disable_conti_log_2+3)
    f.write(b"\xEB")
