        global _start
        section  .text

_start:         
        ; Read input
        mov eax, 3
        mov ebx, 2
        mov ecx, msg
        mov edx, 10
        int 0x80
        
        ; Print string
        mov eax, 4
        mov ebx, 1
        mov ecx, msg
        mov edx, 10
        int 0x80

        ; Return
        mov eax, 1
        xor ebx, ebx
        int 0x80

        section  .data
msg:    times 15 db 0

