section .data
	align 8
	message db "Hello, Holberton", 0Ah

section .text
	global main
	extern printf

main:
	push message
	call printf
	add rsp, 8
	xor eax, eax
	ret
