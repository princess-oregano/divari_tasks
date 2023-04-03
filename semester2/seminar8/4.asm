        global _start
        section .text

%include "st_io.inc"

_start:
        mov edx, l_arr

.loop1:
        lea esi, arr
        mov ecx, l_arr

.loop2:
        mov eax, [esi] ;compare
        mov ebx, [esi+4]
        cmp eax, ebx
        jl .skip

        mov [esi], ebx ;swap
        mov [esi+4], eax

.skip:
        add esi, 4
        dec ecx
        cmp ecx, 1
        ja .loop2
        dec edx
        ja .loop1

        mov ecx, l_arr
        lea esi, arr
.out:
        SIGNINT [esi]
        PUTCHAR 0x20

        add esi, 4
        loop .__out

        PUTCHAR 0xA
        FINISH

.__out:     jmp .out

        FINISH 

        section .data
arr     dd 1, 2, 3, 4, 7, 5, 2
l_arr   equ ($ - arr) / 4
