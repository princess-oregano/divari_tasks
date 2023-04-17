        global _start
        section .text

%include "st_io.inc"

_start:
                pushad

                push ArrLength
                push Arr
                call find_min

                add esp, 4              ; 1 parameter
                popad

                SIGNINT [RetVal]
                PUTCHAR 0xA

                FINISH

find_min:
                push ebp
                mov ebp,esp
                sub esp, 16             ;useless now, 16 bytes of memory
                                        ;=================================
                mov eax, [ebp + 8]      ; 4 = EBP + 4 = RET_ADDR
                mov ecx, [ebp + 12]
                add ecx, eax

                mov ebx, [eax]
.loop:
                cmp ebx, [eax]
                jle .no_change_min

                mov ebx, [eax]

.no_change_min:
                add eax, 4
                cmp eax, ecx
                jle .loop

                mov [RetVal], ebx

                mov esp, ebp
                pop ebp
                ret

        section .data
RetVal          dd 0
Arr             dd 1, 4, 2, 3, -10, 0, 7, -6
ArrLength       equ ($ - Arr)
