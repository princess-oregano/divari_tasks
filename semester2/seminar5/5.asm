        global _start
        section  .text

_start: 
        mov eax, [xp]
        mov [x], eax

        mov eax, [y]
        mov [xp], eax

        ; Return
        mov eax, 1
        xor ebx, ebx
        int 0x80

xp:     dw 0
x:      dw 0
y:      dw 0

