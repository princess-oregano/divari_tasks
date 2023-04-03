        global _start
        section .text

%include "st_io.inc"

_start:
        GETUN [res]

        mov ax, [res]
        mov bl, 12
        div bl

        cmp ah, 0
        je .zero
        mov [Y], ah
        jmp .nonzero

.zero: 
        mov byte [Y], 12
      
.nonzero:
        UNSINT [Y]
        PUTCHAR 58
        mov ax, [res]
        sub ax, [Y]
        mov bl, 12
        div bl
        mov [X], al

        UNSINT [X]
        PUTCHAR 0xA

        FINISH

        section .data

res     dw 0
Y       db 0
X       db 0

