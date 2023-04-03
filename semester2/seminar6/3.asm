        global _start
        section .text

%include "st_io.inc"

_start:
        mov al, [A]
        inc al
        mov [A], al
        adc byte[A+1], 0
        adc byte[A+2], 0
        adc byte[A+3], 0
        mov eax, [A]
        SIGNINT eax
        PUTCHAR 0xA

        FINISH

        section .data
A dd -2147483639
