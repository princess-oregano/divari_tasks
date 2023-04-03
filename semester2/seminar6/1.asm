        global _start
        section .text

%include "st_io.inc"

_start:
        mov al, [B]
        add [A], al

        mov al, [B+1]
        adc [A+1], al

        mov eax, 0
        mov ax, [A]
        UNSINT eax

        FINISH

        section .data
A dw 254
B dw 250

