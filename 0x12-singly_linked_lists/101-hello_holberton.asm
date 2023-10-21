section .data
    hello db "Hello, Holberton", 10 ; String to print with a newline character (10)
    format db "%s", 0            ; Format string for printf

section .text
    global main

main:
    ; Call printf
    mov rdi, format  ; Format string
    mov rsi, hello   ; Address of the string
    mov rax, 0       ; RAX is set to 0 for printf
    call printf

    ; Exit the program
    mov rax, 60      ; syscall number for exit
    xor rdi, rdi     ; status code 0
    syscall

