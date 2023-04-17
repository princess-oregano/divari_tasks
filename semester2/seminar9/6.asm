        global _start
        section .text

%include "st_io.inc"

_start:
        GETSIG eax

        pushad

        mov eax, 999

        popad

        PUTCHAR 0xA
        SIGNINT eax
        PUTCHAR 0xA

        FINISH
