#!/usr/bin/env bash

# https://azeria-labs.com/arm-on-x86-qemu-user/
# https://junyelee.blogspot.com/2021/01/emulating-arm-with-qemu-on-debianubuntu.html

chmod +x ./bmminer

qemu-arm -L /usr/arm-linux-gnueabihf ./bmminer --help
