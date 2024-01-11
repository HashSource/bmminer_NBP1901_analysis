import sys
import requests
from bs4 import BeautifulSoup

if sys.argv[1]:
    if sys.argv[1] == "-h":
        print("[-] usage custom_freq_voltage.py frequency voltage")
        exit(1)

frequency_offset_1 = 0x0024F58
frequency_offset_2 = 0x24A20
voltage_offset_1 = 0x24C24
voltage_offset_2 = 0x24C28


def get_opcodes(value, register):
    lnk = (
        "https://shell-storm.org/online/Online-Assembler-and-Disassembler/?inst=mov+"
        + str(register)
        + "%2C+"
        + str(value)
        + "&arch=arm&as_format=hex#assembly"
    )
    req = requests.get(lnk)
    soup = BeautifulSoup(req.text, "html.parser")
    bytess = bytes(
        [int(x, 16) for x in soup.findAll("code")[0].string.strip().split(" ")]
    )
    return bytess


## get opcodes for voltage
frequency_opcode = get_opcodes(sys.argv[1], "r2")


## get opcodes for frequency
voltage_opcode = get_opcodes(sys.argv[2], "r0")


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
