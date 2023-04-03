        global _start
        section  .text

%include "st_io.inc" 

_start:         
        mov al, [x]
        imul al

        imul byte [b]
        add ax, [c]

        mov bx, ax
        xor eax, eax

        mov al, [x]
        imul al

        neg ax
        sub ax, bx

        idiv byte [a]

        cbw
        cwde
        SIGNINT eax
        PUTCHAR 0xA

        ; Return
        FINISH

        section .data

x       db 2
a       db 7
b       db 10
c       db 5

