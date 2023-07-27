section .data
    hello db 'Hello, Holberton', 0xA
    hello_len equ $-hello

section .text
    global main

main:
    mov rdi, 1      ; file descriptor 1 (stdout)
    mov rsi, hello  ; pointer to the string
    mov rdx, hello_len  ; length of the string
    mov rax, 1      ; syscall number for sys_write
    syscall         ; invoke the syscall to print the string

    ; Exit the program
    mov rax, 60     ; syscall number for sys_exit
    xor rdi, rdi    ; exit code 0
    syscall         ; invoke the syscall to exit the program

