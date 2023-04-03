        global _start
        section .text

%include "st_io.inc"

_start:
	lea	edi, [hhmmss_output]
	mov	eax, [hhmmss_input]
	cdq				; sign extend into edx
        mov     ebx, 3600
	div	ebx
	call	.write_two_digits	; write HH
	mov	al, ':'
	stosb				; write separator
	mov	eax, edx		; load remainder into eax
	cdq				; sign extend into edx
        mov     ebx, 60
	div	ebx
	call	.write_two_digits	; write MM
	mov	al, ':'
	stosb				; write separator
	mov	eax, edx		; load remainder into eax
	call	.write_two_digits	; write SS
	mov	al, 0
	stosb				; write string terminator (\0)
	FINISH

.write_two_digits:
	cbw
        mov     ebx, 10
	div	ebx
	call	.write_digit
	mov	al, ah			; 2nd digit
        ret

.write_digit:
	cmp	al, 9
	jbe	@f
	mov	al, 9			; saturate number
@f:
	add	al, '0'			; ASCII adjust
	stosb
	ret

        section .data

hhmmss_input	dd (12*3600) + (55*60) + 30
hhmmss_output	dd 0,0,0,0

