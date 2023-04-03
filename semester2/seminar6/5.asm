        global _start
        section  .text

%include "st_io.inc" 

_start:         
        mov bl, [c]
        add bx, [d]
        mov al, [b]
        mul byte [ten]

        div bx

        mov cx, ax
        xor eax, eax
        xor ebx, ebx

        mov bl, [a]
        add bl, [b]
        mov al, [a]
        mul byte [ten]

        div bx

        add ax, cx

        cwde
        UNSINT eax
        PUTCHAR 0xA

        ; Return
        FINISH

        section .data

a       db 1
b       db 1
c       db 1
d       dw 1
ten     db 10
