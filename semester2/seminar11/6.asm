        global _start
        section .text

%include "st_io.inc"

_start:
        mov di, [DATE_2]
        call print_data

        mov di, [DATE_1]

        xor esi, esi
        mov si, di

        and si, 1111100000000000b
        shr si, 11
        mov bx, si  ; d
        xor esi, esi
        mov si, di

        and si, 0000011110000000b
        shr si, 7
        mov cx, si  ;m
        xor esi, esi
        mov si, di

        and si, 0000000001111111b
        mov dx, si  ; y
        xor ax, ax

        shl dx, 9
        add ax, dx

        shl cx, 5
        add ax, cx

        add ax, bx

        mov di, ax
        call print_data

        FINISH

print_data:
        xor esi, esi
        mov si, di

        and si, 1111111000000000b
        shr si, 9

        UNSINT esi
        PUTCHAR '.'

        xor esi, esi
        mov si, di

        and si, 0000000111100000b
        shr si, 5

        UNSINT esi
        PUTCHAR '.'

        xor esi, esi
        mov si, di

        and si, 0000000000011111b

        UNSINT esi
        PUTCHAR 0x0A

        ret

        section .data
DATE_1    dw  6806
DATE_2    dw  1111111000100010b ; max 1 2
