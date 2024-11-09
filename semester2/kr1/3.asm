        global _start
        section .text

%include "st_io.inc"

_start:
        PRINT "Enter number:"
        PUTCHAR 0xA

        GETUN edi

        mov eax, arr
        mov ecx, 9

        mov si, [eax + 2 * ebx]

.next:
        mov dx, [eax + 2 * ebx]
        cmp di, dx 
        je .num_encount
        jg .continue
        cmp si, dx
        jg .lesser
        jmp .continue

.lesser:
        mov si, dx

.continue:
        inc ebx
        dec ecx
        cmp ecx, 0
        jne .next
        jmp .done

.num_encount:
        push esi
        inc ebx
        dec ecx
        xor esi, esi
        mov si, [eax + 2 * ebx]
        jmp .next

.done:
        push esi
        pop eax
        pop ebx
    
        UNSINT ebx
        PUTCHAR 0x20
        UNSINT eax
        PRINT 0xA
        FINISH

        section .data
arr     dw 6, 5, 9, 8, 7, 1, 2, 3, 5

