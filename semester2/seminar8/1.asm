        global _start
        section .text

%include "st_io.inc"

_start:
        mov ecx, l_arr          ;ecx = length

        mov esi, arr            ;esi = address of array

        mov eax, esi            ;first element
        mov ebx, esi            ;first element
.loop:
        mov edx, [esi]

        cmp [eax], edx
        jg .max

        mov eax, esi

.max:
        cmp [ebx], edx
        jl .min

        mov ebx, esi

.min:
        add esi, 4
        loop .loop

        mov ecx, [ebx]          ;store min_value
        mov edx, [eax]          ;store max_value

        mov [ebx], edx          ;min_addr <- stored max_value
        mov [eax], ecx          ;max_addr <- stored min_value

        mov ecx, l_arr          ;ecx <- length
        mov esi, arr            ;esi <- address
.out2:
        SIGNINT [esi]
        PUTCHAR 0x20

        add esi, 4
        loop .out2

        PUTCHAR 0xA

        FINISH

.out:   jmp .out2

        section .data
arr     dd 1, 2, 3, 4, 7, 5, 2
l_arr   equ ($ - arr) / 4
