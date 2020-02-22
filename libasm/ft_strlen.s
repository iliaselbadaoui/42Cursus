section .text
    global _ft_strlen
_ft_strlen : 
    mov rcx, 0
while :
    cmp byte[rdi + rcx], 0
    je exit
    inc rcx
    jmp while
exit:
    mov rax, rcx
    ret