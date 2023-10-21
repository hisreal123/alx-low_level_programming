section .data
    hello_fmt db "Hello, Holberton",0xA,0
    hello_args db 0

section .text
    global _start

_start:
    ; Call printf
    mov rdi, hello_fmt
    mov rax, 0      ; 0 is the format for printf
    call printf

    ; Exit the program
    mov rax, 60     ; 60 is the syscall number for exit
    xor rdi, rdi    ; Set the exit status to 0
    syscall

section .text
    extern printf