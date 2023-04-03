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
        cmp dword [esi - 4], 0
        loopne .loop

        PUTCHAR 'M'
        PUTCHAR 'I'
        PUTCHAR 'N'
        PUTCHAR '-'
        SIGNINT [ebx]           ;min_value
        PUTCHAR 0xA


        PUTCHAR 'M'
        PUTCHAR 'A'
        PUTCHAR 'X'
        PUTCHAR '-'
        SIGNINT [eax]           ;max_value
        PUTCHAR 0xA

        mov ecx, l_arr          ;ecx <- length
        mov esi, arr            ;esi <- address
.outpoot:
        SIGNINT [esi]
        PUTCHAR 0x20

        add esi, 4
        cmp dword [esi-4], 0
        loopne .__outpoot

        PUTCHAR 0xA
        FINISH

.__outpoot:     jmp .outpoot

        section .data
arr     dd 1, 2, 3, 4, 7, 5, 2
l_arr   equ ($ - arr) / 4
