        global _start
        section .text

%include "st_io.inc"

_start:
                GETSIG eax
                GETSIG ebx

                mul ebx

                jo .overflow
                jc .overflow

                PRINT "NO OVERFLOW"
                jmp .finish

.overflow:
                PRINT "OVERFLOW"
                jmp .finish

.finish:
                PUTCHAR 0xA
                FINISH

