        global _start
        section  .text

%include "st_io.inc"

_start:         
        mov ecx, (5684 / 4 + 357 / 3 + 245 / 5) * 3
        UNSINT ecx

        ; Return
        mov eax, 1
        xor ebx, ebx
        int 0x80

        section  .data
msg:    times 15 db 0

