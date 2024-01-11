#!/usr/bin/env bash

# https://azeria-labs.com/arm-on-x86-qemu-user/
# https://junyelee.blogspot.com/2021/01/emulating-arm-with-qemu-on-debianubuntu.html

chmod +x ./bmminer
chmod +x ./cgminer

# Using libraies from unpacked FW

# Open Socket Using bmminer
qemu-arm -L /home/danielsokil/Lab/Zetta-Pow/Antminer-Firmware-Internals/Antminer_S19_Pro_zynq7007_BHB42XXX/minerfs_no_header/ ./bmminer

# Cgminer will attempt to open the bmminer socket
qemu-arm -L /home/danielsokil/Lab/Zetta-Pow/Antminer-Firmware-Internals/Antminer_S19_Pro_zynq7007_BHB42XXX/minerfs_no_header/ ./cgminer
