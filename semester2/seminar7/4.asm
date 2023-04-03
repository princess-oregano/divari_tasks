        global _start
        section .text

%include "st_io.inc"

_start:
        GETUN [num]
        mov al, [num]

        mov bl, 10
        div bl
        cmp ah, 5
        je .OK
        cmp ah, 0
        je .OK

        xor ah, ah
        div bl
        cmp ah, 5
        je .OK
        cmp ah, 0
        je .OK

        jmp .NOK
.OK:     
        PRINT "OK"
        jmp .done

.NOK:
        PRINT "NOT OK"

.done:
        PUTCHAR 0xA
        FINISH

        section .data

num     db 0

