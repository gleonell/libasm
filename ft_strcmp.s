

segment .txt
    global ft_strcmp

ft_strcmp:
        xor rax, rax
        xor rbx, rbx
        jmp loop_cmp
loop_cmp:
        cmp byte[rdi], 0
        je exit
        cmp byte[rsi], 0
        je exit
        cmp byte rdi, rsi
        jne exit
        inc rdi
        inc rsi
        jmp loop_cmp
exit:
        sub rdi, rsi
        mov rax, rdi
        ret


        