        global _start
        section .text

%include "st_io.inc"

jmp _start

bar:
        push ebp
        mov ebp, esp

        mov eax, dword [ebp + 8] 
        add eax, dword [ebp + 12]

        UNSINT eax
        PUTCHAR 0xA

        mov esp, ebp
        pop ebp
        ret

_start:
        push 1
        push 3

        call foo
        call bar
        
        FINISH

foo:
        push ebp
        mov ebp, esp

        mov eax, dword [ebp + 8] 
        sub eax, dword [ebp + 12]

        UNSINT eax
        PUTCHAR 0xA

        mov esp, ebp
        pop ebp
        ret

