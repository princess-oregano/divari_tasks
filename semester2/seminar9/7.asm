        global _start
        section .text

%include "st_io.inc"

; 1,2 - for round, 3, 4 - for square

_start:
        mov ecx, len
        mov edi, exp
        mov edx, esp

.loop:
        cmp byte [edi], 40   ; ( 
        jne .next1
        push 1
        jmp .next_loop

.next1:
        cmp byte [edi], 41   ; )
        jne .next2
        push 2
        jmp .next_loop

.next2:
        cmp byte [edi], 91   ; [
        jne .next3
        push 3
        jmp .next_loop

.next3:
        cmp byte [edi], 93   ; ]
        jne .corr
        push 4

.next_loop:
        pop eax
        pop ebx

        cmp ebx, 1
        je .round
        jmp .sq
        
.round:
        cmp eax, 2
        je .corr
        push ebx
        push eax

.sq:
        cmp ebx, 3
        je .square
        jmp .corr

.square:
        cmp eax, 4
        je .corr
        push ebx
        push eax

.corr:
        inc edi
        dec ecx
        cmp ecx, 0
        je .loop_done
        jmp .loop
        
.loop_done:
        cmp esp, edx
        jne .error

        PRINT "YES"
        jmp .done
         
.error: 
        PRINT "NO"

.done:
        FINISH

        section .data
exp     db "([6 * (5 - 6)] + )3)*(8 - 8) + 5"
len     equ $ - exp
