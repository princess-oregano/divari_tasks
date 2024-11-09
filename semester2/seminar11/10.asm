        global _start
        section .text

%include "st_io.inc"

_start:
        std

        mov ecx, len 
        mov al, '*' 
        mov edi, str
        add edi, len

        repne scasb

        mov byte [edi + 1], '+'
        
        mov eax, 4
        mov ebx, 1
        mov ecx, str
        mov edx, len

        int 0x80
        
        FINISH

        section .data
str:    db "5+98*4+56-46*5", 0xA 
len     equ $ - str

