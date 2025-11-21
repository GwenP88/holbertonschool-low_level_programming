section .data
	label: db "Hello, World", 0xA

section .text

global main

main:

mov rax, 1
mov rdi, 1
mov rsi, label
mov rdx, 13
syscall

mov rax, 60
mov rdi, 0
syscall
