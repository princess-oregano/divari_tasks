        global _start
        section .text

%include "st_io.inc"

_start:
        PRINT "Enter number:"
        PUTCHAR 0xA

        GETUN edi

        mov ecx, 10

.loop1:
        xor eax, eax
        xor ebx, ebx

        dec ecx
        mov al, byte [arr + ecx]
        mov edx, 10
        
        .loop2:
                dec edx
                mov bl, byte [arr + edx]

                add ebx, eax
                cmp ebx, edi
                je .found

                cmp edx, 0
                jne .loop2

        cmp ecx, 0
        jne .loop1

        jmp .not_found

.found: 
        mov byte [arr + edx], al
        sub bl, al
        mov byte [arr + ecx], bl
        jmp .print

.not_found:
        PRINT "NOT FOUND"
        PUTCHAR 0xA

.print:
        mov ecx, 0

.loop_print:
        xor eax, eax
        mov al, [arr + ecx]
        UNSINT eax
        PUTCHAR 0x20

        inc ecx
        cmp ecx, 10
        jne .loop_print

        FINISH

        section .data
arr     db 24, 87, 250, 9, 45, 11, 98, 121, 7, 118
