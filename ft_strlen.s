segment .text
        global ft_strlen
ft_strlen: 
        xor rax, rax
        jmp compare
compare:
        cmp byte [rdi + rax], 0H
        je exit
        add rax,1
        jmp compare
exit:
        ret