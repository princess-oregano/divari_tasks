        global _start
        section .text

%include "st_io.inc"

_start:
        mov edi, esp

        push 1
        push 2
        push 0
        push 4
        push 5
        push 6
        push 7
        push 8
        push 9
        push 10

        mov ecx, 10
.loop:
        xor eax, eax
        mov ax, cx
        mov bx, 4
        mul bx
        add eax, esp

        cmp word [eax], 0
        jne .non

        mov ebx, ecx
        .newloop:
                dec ebx
                mov edx, [eax-4]
                mov [eax], edx

                sub eax, 4
                cmp ebx, 0
                jne .newloop

        pop ebx

.non:
        dec ecx
        cmp ecx, 0
        jne .loop

        FINISH

