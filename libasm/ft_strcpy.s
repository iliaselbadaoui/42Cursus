section .text
    global _ft_strcpy
_ft_strcpy :
    cmp rsi, rdi
    je exit
    mov rcx, 0
while :
    cmp byte[rsi + rcx], 0
    je exit
    mov al, byte[rsi + rcx]
    mov byte[rdi + rcx], al
    inc rcx
    jmp while
exit:
    mov rax, rdi
    ret