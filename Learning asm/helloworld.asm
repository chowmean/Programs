section .text
   Global _start        ; must be declared for linker same as main() in c
    _start:
    mov edx,len
    mov ecx,msg
    mov ebx,1
    mov eax,4
    int 0x80
    mov eax,1
    int 0x80
    end _start

section .data
msg db 'hello world!' , 0xa
len equ $ - msg

