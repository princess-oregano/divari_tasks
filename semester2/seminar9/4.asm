        global _start
        section .text

%include "st_io.inc"

_start:
        push 1
        push 4
        push 3

        mov esi, esp            ;esi <- esp

.poop:
        add esi, 4

        mov eax, [esi - 4]
        cmp [esi], eax
        je .found_same

        cmp esi, ebp
        jbe .poop

        mov eax, 0
        jmp .finish

.found_same:
        mov eax, 1

.finish:
        SIGNINT eax
        PUTCHAR 0xA

        FINISH
