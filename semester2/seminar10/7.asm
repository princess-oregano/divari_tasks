        global _start
        section .text

%include "st_io.inc"

_start:
        mov ebx, 1
        mov eax, 1

        call fact

        PUTCHAR 0xA

        FINISH

fact:
        push ebp
        mov ebp, esp

        add ebx, eax
        

        cmp ebx, ecx
        je .ret

        call fact

.ret:
        mov esp, ebp
        pop ebp
        ret

