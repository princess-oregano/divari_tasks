        global _start
        section .text

%include "st_io.inc"

_start:
        mov ecx, 4
        mov edi, str1 + 2
        add esi, str2 + 4

        repne movsb

        mov eax, 4
        mov ebx, 1
        mov ecx, str1
        mov edx, 10

        int 0x80
        
        FINISH

        section .data
str1:    db "1234567890"
str2:    db "0987654321"

