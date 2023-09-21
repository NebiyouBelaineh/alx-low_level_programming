; A 64 bit program that prints Hello, Holberton followed by a newline

section .data
   msg: db "Hello, Holberton", 0
   fmt: db "%s", 10, 0rbp

extern printf

section .text
   global main

main:
   push rbp

   mov rdi,fmt
   mov rsi,msg
   mov rax,0
   call printf

   pop rbp

   mov rax,0
   ret

