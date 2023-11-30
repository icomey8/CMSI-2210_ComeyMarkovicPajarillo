section .data
    testValues dq 0x12345678, 0x87654321, 0xAABBCCDD, 0x11223344, 0x55667788

section .text
    extern makeNetworkByteOrder
    global main

main:
    push rbp
    mov rbp, rsp ; Sets the base pointer to the current stack pointer

    lea rdi, [testValues] ; Loads test values into the rdi
    mov rcx, 5 ; Number of test values, used as a counter for the loop

loop:
    mov rax, [rdi]
    call makeNetworkByteOrderASM ; rax is passed to the function
    add rdi, 8 ; moves pointer to next value
    dec rcx ; decrement counter
    jnz loop ; jump if not zero

    mov rsp, rbp ; reset stack pointer
    pop rbp ; restore base pointer
    ret ; returns
