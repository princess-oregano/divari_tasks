        global _start
        section .text

%include "st_io.inc"

_start:
                mov eax, 1
                mov ebx, 0

                mov ecx, 2
.loop:
                xchg eax, ebx          
                add eax, ebx         

                inc ecx
                cmp ecx, 10
                jb .loop

                SIGNINT eax

                FINISH
