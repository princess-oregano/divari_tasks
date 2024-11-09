        global _start
        section .text

%include "st_io.inc"

_start:
        mov ax, 38

        mov dx, 10000000b   ; bitmask
        mov cl, 7  ; cnt
        mov di, 0   ;mark

.loop:
        mov bx, ax  
        and bx, dx  
        shr dx, 1

        shr bx, cl

        add di, bx
        cmp di, 1
        jb .next

        add bx, '0' - 0
        PUTCHAR bl

.next:
        dec cl
        cmp dx, 0
        jne .loop

        PUTCHAR 0xA

        mov eax,    1
        mov ebx,    0
        int 0x80                ;exit
