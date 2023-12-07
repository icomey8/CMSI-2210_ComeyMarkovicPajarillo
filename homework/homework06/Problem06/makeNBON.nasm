; nasm -f macho64 makeNBON.nasm -o makeNBON.o
; gcc -c makeNBOC.c -o makeNBOC.o
; gcc makeNBON.o makeNBOC.o -o makeNBOExecutable
; note: I am on M1 chip

section .data
    testValues dq 0x12345678, 0x87654321, 0xAABBCCDD, 0x11223344, 0x55667788

section .text
    extern _makeNetworkByteOrderASM
    global _main

_main:
    push rbp
    mov rbp, rsp  ; Set the base pointer to the current stack pointer
    lea rdi, [rel testValues]  ; Load the address of testValues into rdi
    mov rcx, 5  ; Set the number of test values, used as a counter for the loop

loop:
    mov rax, [rdi]
    call _makeNetworkByteOrderASM  ; Call the function, rax is passed as an argument
    add rdi, 8  ; Move the pointer to the next value
    dec rcx  ; Decrement the counter
    jnz loop  ; Jump if the zero flag is not set (i.e., rcx is not zero)

    mov rsp, rbp  ; Reset the stack pointer
    pop rbp  ; Restore the base pointer
    ret  ; Return from the function
