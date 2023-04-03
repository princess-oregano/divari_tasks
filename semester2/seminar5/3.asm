        global _start
        section  .text

%include "st_io.inc" 

_start:         
        ; Print string
        PRINT "HELLO"

        GETCHAR
        PUTCHAR al

        GETUN eax
        UNSINT eax

        GETSIG eax
        SIGNINT eax

        PUTCHAR 0xA

        ; Return
        FINISH

        section  .data
msg:    times 15 db 0

