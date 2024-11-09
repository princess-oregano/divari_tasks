        global _start
        section .text

%include "st_io.inc"

_start:
        lea ebx, arr
        mov al, 255

        call recur

        UNSINT eax
        PUTCHAR 0xA

        FINISH

recur: 
        cmp ebx, len
        jne .next
        ret

.next:
        cmp al, byte [ebx]
        jae .lesser
        jmp .none

.lesser:
        mov al, byte [ebx]

.none:
        inc ebx
        call recur

        jmp recur

        section .data
arr     db 25, 78, 5, 34, 8, 12
len     equ $ 
