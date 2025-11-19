section .data
    msg db "Hello, World", 10   ; 10 = '\n'
    len equ $ - msg             ; longueur du message

section .text
    global _start

_start:
    mov rax, 1         ; syscall 1 = write
    mov rdi, 1         ; fd 1 = stdout
    mov rsi, msg       ; adresse du texte
    mov rdx, len       ; longueur du texte
    syscall            ; appel système

    mov rax, 60        ; syscall 60 = exit
    mov rdi, 0         ; code retour 0
    syscall
