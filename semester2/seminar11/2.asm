        global _start
        section .text

%include "st_io.inc"

_start:
        xor ebx, ebx

.loop:
        GETCHAR
        cmp al, 32
        je .out
        sub al, 0x30
        and al, 0x1
        or bl, al
        shl ebx, 1
        jmp .loop

.out:
        shr ebx, 1
        UNSINT ebx
        PUTCHAR 0xA
        
        FINISH

