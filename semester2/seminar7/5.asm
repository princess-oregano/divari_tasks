        global _start
        section .text

%include "st_io.inc"

_start:
        GETUN [num]
        mov ax, [num]

        mov bl, 60
        div bl
        mov [sec], ah

        xor ah, ah
        div bl
        mov [min], ah

        xor ah, ah
        div bl
        mov [hr], ah
        
        cmp byte [sec], 59
        je .eq
        jmp .neq

.eq:    
        mov byte [sec], 0
        add byte [min], 1
        jmp .cont

.neq:
        add byte [sec], 1

.cont:
        xor eax, eax
        mov al, [hr]
        UNSINT eax
        PUTCHAR 58
        mov al, [min]
        UNSINT eax
        PUTCHAR 58
        mov al, [sec]
        UNSINT eax

.done:
        PUTCHAR 0xA
        FINISH

        section .data

num     dw 0
sec     db 0
min     db 0
hr      db 0
