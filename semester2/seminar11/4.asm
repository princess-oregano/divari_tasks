        global _start
        section .text

%include "st_io.inc"

_start:
        mov eax, 10
        sub eax, 100

        pushf
        pop eax
        xor eax, 0000000010000000b
        push eax
        popf

        js .sign

        PRINT "NO SIGN"
        jmp .done

.sign:
        PRINT "SIGN"

.done:
        PUTCHAR 0xA
        
        FINISH


