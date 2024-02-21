#!/usr/bin/env bash

ghidrecomp --skip-cache --va --fa ./S9k/cgminer &>./S9k/decompile.log
ghidrecomp --skip-cache --va --fa ./S9SES9KTestJig/bmminer &>./S9SES9KTestJig/decompile.log
ghidrecomp --skip-cache --va --fa ./S9SES9KTestJig/bitmain_axi.ko &>./S9SES9KTestJig/decompile.log
ghidrecomp --skip-cache --va --fa ./S9SES9KTestJig/fpga_mem_driver.ko &>./S9SES9KTestJig/decompile.log
ghidrecomp --skip-cache --va --fa ./S11/bmminer &>./S11/decompile.log
ghidrecomp --skip-cache --va --fa ./S17e/cgminer &>./S17e/decompile.log
ghidrecomp --skip-cache --va --fa ./T9+/bmminer &>./T9+/decompile.log
ghidrecomp --skip-cache --va --fa ./T17e/cgminer &>./T17e/decompile.log
