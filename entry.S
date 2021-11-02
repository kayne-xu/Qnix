
# 给内核分配 4096 * 16 bytes(64kb)空间用作内核栈
# call main函数
# 此地址为0x80200000


.section .text
.global _entry
_entry:
    nop
    nop
    nop
    la sp, boot_stack_top
    call main

.section .bootstack

.global boot_stack
boot_stack:
    .space 4096 * 16

.global boot_stack_top
boot_stack_top:

