        global _start
        section  .text

%include "st_io.inc" 

_start:         
        mov ah, 21
        movzx ebx, ah

        UNSINT ebx

        PUTCHAR 0xA 

        mov bx, -21
        mov ax, bx

        cwde
        SIGNINT ebx

        PUTCHAR 0xA 

        ; Return
        FINISH

        section .data

