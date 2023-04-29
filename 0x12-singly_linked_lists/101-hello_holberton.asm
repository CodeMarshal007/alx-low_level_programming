section .data
	msg db "Hello, Holberton", 0x0A

section .text
	global _start

_start:
	mov eax, 4 ; System call for write
	mov ebx, 1 ; File descriptor for stdout
	mov ecx, msg ; Pointer to message
	mov edx, 14 ; Message length
	int 0x80 ; Call kernel

	mov eax, 1 ; System call for exit
	xor ebx, ebx ; Exit code
	int 0x80 ; Call kernel
