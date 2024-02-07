# Package

version       = "0.1.0"
author        = "s0kil"
description   = "Dynamic Freq/Volt Patcher For bmminer"
license       = "BSD"
srcDir        = "src"
bin           = @["dynamic_patcher"]


# Dependencies

requires "nim >= 2.0.2"
requires "https://github.com/ba0f3/ptrace.nim"
