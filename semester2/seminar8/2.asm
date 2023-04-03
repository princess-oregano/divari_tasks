        global _start
        section .text

%include "st_io.inc"

_start:
        GETSIG edx

        mov ecx, l_arr
        sub ecx, eax                    ;ecx = length - entered value

        lea esi, [arr + edx * 4]        ;esi = address of array + entered value * 4

        xor ebx, ebx
.loop:
        mov eax, [esi]

        cmp eax, 0
        jge .sum

        add ebx, eax

.sum:

        add esi, 4
        loop .loop

        SIGNINT ebx
        PUTCHAR 0xA
        PUTCHAR 0xA

        mov ecx, l_arr
        sub ecx, edx                    ;ecx = length - entered value

        lea esi, [arr + edx * 4]        ;esi = address of array + entered value * 4

.out:
        SIGNINT [esi]
        PUTCHAR 0x20

        add esi, 4
        loop .__out

        PUTCHAR 0xA
        FINISH

.__out:     jmp .out

        section .data
arr     dd  0, 1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, 15, -16, 17, -18, 19, -20
l_arr   equ ($ - arr) / 4

