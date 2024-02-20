#!/usr/bin/env bash

# Tool
# https://gputils.sourceforge.io/
# sudo apt install gputils

# https://www.microchip.com/en-us/product/pic16f1704

gpdasm -p p16f1704 -csno S19pro-PIC.hex >S19pro-PIC.gpdasm-0.asm
