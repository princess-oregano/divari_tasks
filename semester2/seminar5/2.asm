        global _start
        section  .text

_start: 
        mov eax, 4
        mov ebx, 1
        mov ecx, A
        mov edx, 4
        int 0x80

        mov al, byte [A+2]
        xchg al, byte [A]
        mov byte [A+2], al
        mov al, byte [A+1]
        xchg al, byte [A]
        mov byte [A+1], al

        mov eax, 4
        mov ebx, 1
        mov ecx, A
        mov edx, 4
        int 0x80

        mov eax, 1
        xor ebx, ebx
        int 0x80

        section  .data
A:      db       "123", 0xA, 0

