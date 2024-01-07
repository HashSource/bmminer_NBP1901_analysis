#!/usr/bin/env bash

# https://ghidra-sre.org/
# https://github.com/clearbluejar/ghidrecomp

ghidrecomp --skip-cache --va --fa ./bmminer &>decompile.log
