        global _start
        section .text

%include "st_io.inc"

_start:
        push 0
        push 2
        push 0
        push 4
        push 5
        push 0
        push 7
        push 8
        push 9
        push 10

        xor eax, eax
        mov ecx, 10

.loop:
        dec ecx

        pop ebx
        cmp ebx, 0
        je .eq
        cmp ecx, 0
        je .done
        jne .loop
.eq:
        inc eax
        cmp ecx, 0
        jne .loop

        
.done:
        UNSINT eax
        PUTCHAR 0xA

        FINISH

