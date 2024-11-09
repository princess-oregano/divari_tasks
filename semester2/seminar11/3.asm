        global _start
        section .text

%include "st_io.inc"

_start:
        mov al, 10100000b
        mov bl, 11111111b

        xor cl, cl
        mov cl, al
        and cl, 11110000b

        xor dl, dl
        mov dl, bl
        and dl, 00001111b
        add cl, dl
        mov ax, cx
        mov dx, 10000000b 
        mov cl, 7 
        mov di, 0  

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
