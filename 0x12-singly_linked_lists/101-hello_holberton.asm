section .data
    msg db "Hello, Holberton",10
    len equ $-msg

section .text
    global _start

_start:
    ; write message to stdout
    mov eax, 1
    mov edi, 1
    mov rsi, msg
    mov edx, len
    syscall

    ; exit program
    mov eax, 60
    xor edi, edi
    syscall

