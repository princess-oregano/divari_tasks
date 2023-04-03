        global _start
        section  .text

%include "st_io.inc" 

_start:         
        mov al, [b]
        add al, [a]
        sub al, [c]

        mov byte [d], al

        mov al, [b+1]
        add al, [a+1]
        sub al, [c+1]

        mov byte [d+1], al

        mov al, [b+2]
        add al, [a+2]
        sub al, [c+2]

        mov byte [d+2], al

        mov byte [d+3], 0

        mov eax, [d]

        UNSINT eax
        PUTCHAR 0xA

        ; Return
        FINISH

        section .data

a       resb 3
b       resb 3
c       resb 3
d       resb 4
