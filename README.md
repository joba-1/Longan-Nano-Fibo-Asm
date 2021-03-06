# Longan Nano Assembler Example Fibonacci Calculator

Calculate n'th fibonacci number with assembler and print it to serial via C

## Topics
It contains various examples that should be reusable in other code
* Serial output with printf()
* Linking in an assembler function
* Power down

Nano        | USB2Serial | Comment
------------|------------|--------
3V3         | Vcc        | not needed if powered via USB or other
Gnd         | Gnd
A9 (T0)     | Rx
A10 (R0)    | Tx         | not needed if flashing via USB/DFU or JTAG

## Documentation
Tested with PlatformIO on a Longan Nano
* https://github.com/riscv/riscv-asm-manual/blob/master/riscv-asm.md
* https://docs.opentitan.org/doc/rm/asm_coding_style/
* https://passlab.github.io/CSCE513/notes/lecture04_RISCV_ISA.pd
* https://vivonomicon.com/2020/02/11/bare-metal-risc-v-development-with-the-gd32vf103cb/

## Legal
* Author  Joachim Banzhaf
* License Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
