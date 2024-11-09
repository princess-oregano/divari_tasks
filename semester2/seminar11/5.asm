        global _start
        section .text

%include "st_io.inc"

_start:
        mov dword [x], 152

        SIGNINT [x]
        PUTCHAR 0x0A
        SIGNINT [y]
        PUTCHAR 0x0A
        PUTCHAR 0x0A

        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1    ;1

        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1    ;2

        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1    ;3

        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1
        rol dword [x], 1
        rcl dword [y], 1    ;4

        SIGNINT [x]
        PUTCHAR 0x0A
        SIGNINT [y]
        PUTCHAR 0x0A

        FINISH

        section .bss
x resd 1
y resd 1

