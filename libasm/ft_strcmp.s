section .text
    global _ft_strcmp
_ft_strcmp : 
    mov rcx, 0
    mov rbx, 0
    mov rdx, 0
while : 
    movzx rbx, byte[rsi + rcx]
    movzx rdx, byte[rdi + rcx]
    cmp rbx , 0
    je exit ;je => jump if equal
    cmp rbx, rdx
    jne exit
    inc rcx
    jmp while
exit:
    sub rdx, rbx
    mov rax, rdx
    ret