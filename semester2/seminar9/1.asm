        global _start
        section .text

%include "st_io.inc"

_start:
        UNSINT eax
        PUTCHAR 0xA
        UNSINT ebx
        PUTCHAR 0xA
        
        push eax
        push ebx

        push 1
        push 2
        push 3
        push 4
        push 5
        push 6
        push 7
        push 8
        push 9
        push 10
        
        pop eax
        pop ebx

        push eax
        push ebx

        pop eax
        pop ebx

        UNSINT eax
        PUTCHAR 0xA
        UNSINT ebx
        PUTCHAR 0xA

        FINISH

