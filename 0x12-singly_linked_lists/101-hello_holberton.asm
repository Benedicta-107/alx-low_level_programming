section .data
    hello: db "Hello, Holberton!", 0Ah, 00h
    fmt: db "%s"

section .text
    global _start

_start:
    ; Push the format string onto the stack
    push qword fmt

    ; Push the address of the hello string onto the stack
    push qword hello

    ; Call printf
    mov rax, 0
    call printf

    ; Clean up the stack
    add rsp, 16

    ; Exit the program
    mov eax, 0
    ret

