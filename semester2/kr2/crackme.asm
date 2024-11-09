.file "crackme.c"
.intel_syntax noprefix
.text
.globl foo
.type foo, @function
foo:
endbr64
mov rax, QWORD PTR [rsp]
ret
.size foo, .-foo
.globl buz
.type buz, @function
buz:
endbr64
cmp edi, esi
jne .L7
ret
.L7:
sub rsp, 8
mov edi, -1
call exit@PLT
.size buz, .-buz
.globl bar
.type bar, @function
bar:
endbr64
push r12
push rbp
push rbx
mov ebp, edi
mov eax, 0
call foo
mov ebx, 0
mov r12d, 0
mov ecx, 0
mov r8d, 0
mov edi, 0
.L11:
movzx edx, BYTE PTR [rax]
movzx esi, dl
lea esi, [rsi+rsi*2]
lea edi, [rdi+rsi*2]
cmp dl, -24
sete sil
movzx esi, sil
add ecx, esi
add rax, 1
cmp ecx, 2
je .L10
lea r12d, 6[rbx]
lea ebx, -6[r8]
mov r8d, edx
jmp .L11
.L10:
mov esi, ebp
call buz
movzx r12d, r12b
movzx eax, bl
sal eax, 8
lea eax, [rax+r12]
pop rbx
pop rbp
pop r12
ret
.size bar, .-bar
