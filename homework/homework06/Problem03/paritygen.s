//
//  paritygen.s
//  assemb
//
//  Created by Ian Comey on 11/29/23.
//



            .global     _main

            section     .text
_main:

            mov         r12, #0xBA        // load 0xBA into r12
            mov         r14, #0xBA        // will store original for us to compare later
            mov         r8, #0            // keep track of how many 1's
            mov         r9, #0            // our parity bit value

compare:
            cmp         r12, #0x00        // check to see if we have fully shifted our byte
            je          finish            // if byte is equal to 0x00, then we have checked every bit, so jump to end
            and         r12, #0x01        // AND 0xBA and 0x01 --> 0x00
            cmp         r12, #0x01        // compare 0x00 and 0x01
            je          shift_e             // if 0x00 and 0x01 are equal--they're not--, then it will jump to where count is
            jne         shift_ne

shift_e:
            inc         r8                // increase count of 1's by 1
            shr         r12, #1           // shift byte by 1 to the right
            cmp         r12, r14          // compare our current shifted byte with the original to ensure that it will jump back to comapre
            jne         compare           // jump back to compare

shift_ne:
            shr         r12, #1           // shift byte by 1 to the right
            cmp         r12, r14          // compare our current shifted byte with the original to ensure that it will jump back to comapre
            jne         compare           // jump back to compare

finish:
            mov         r8                // load our count of 1's
            mov         r0, #1            // load a value of 1 to AND with
            and         r2, r8, r1        // AND to check last bit
            cmp         r2, r1            // see if last bit is equal to 1 (odd)
            je          odd_p             // jump if odd
            jne         even_p            // jump if even

odd_p:
            mov         r9                // keep r9 as 0 since parity is odd

even_p:
            mov         r9, #1            // set r9 to 1 since parity is even
            
            
out:
            mov         x0,   #0          // return value to O/S
            mov         x16,  #1          // 'exit' function of svc
            svc         #0x80             // call svc to do it


            section     .data
even_msg:
            .asciz      "\n\n The parity bit is: \n\n", r9



