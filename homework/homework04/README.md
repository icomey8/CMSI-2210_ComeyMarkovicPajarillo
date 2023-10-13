## Assignment #4:

1. Consider the function with three inputs ```(A, B, C)``` and two outputs ```(X, Y)``` that works like this:

          A  B  C | X  Y
         ---------+------
          0  0  0 | 0  1
          0  0  1 | 0  1
          0  1  0 | 0  1
          0  1  1 | 1  1
          1  0  0 | 1  0
          1  0  1 | 1  1
          1  1  0 | 1  0
          1  1  1 | 1  1
Design two logic circuits for this function, one using AND, OR and NOT gates only, and one using NAND gates only. You DO NOT HAVE to draw the circuit, but it might be helpful to do that to visualize and trace the logic. However, for this question you are only required to write the two formulas — one for computing ```X``` and one for computing ```Y```. They can take the form of a logical equation such as  ```X := A and B or such as Y := not-B and (A or C).```
```
X := A or (B and C)
Y := not-A and not-(B and C)
```

2. Draw a logic circuit that compares two 2-bit signed numbers as follows. It should have four inputs a1, a0, b1, and b0. a1a0 is a 2-bit signed number (call it a) and b1b0 is a 2-bit signed number (call it b). The circuit has one output, c, which is 1 if a > b and 0 otherwise.
```
Please see attached image in homework04 folder.

```

3. Given a 32-bit register, write logic instructions to perform the following operations. For parts (c) and (f) assume an unsigned interpretation; for part (d) assume a signed interpretation.

          a.) Clear all even numbered bits.
          b.) Set the last three bits.
          c.) Compute the remainder when divided by 8.
          d.) Make the value -1
          e.) Complement the two highest order bits
          f.) Compute the largest multiple of 8 less than or equal to the value itself
```

```
 
4. For the sample single-accumulator computer discussed in class, write a complete assembly language program in the ```stanley/penguin``` language that sends the values ```0``` through ```255``` out to port ```0x8```. NOTE: the machine code for this will be written in the next problem.
```
        JMP     start    : begin by jumping over the data area
value:  0                : store (starting) value
limit:  255              : we'll be computing values up to this amount
one:    1                : store value
port:   8                : store port
start:  LOAD    value    : bring the value into accumulator to use
        WRITE   port     : output the current value to port
        ADD     one      : add 1 to the value
        STORE   value    : store it (for next time)
        SUB     limit    : we need to compare with limit, subtracting helps
        JLZ     start    : if not yet past limit, keep going
end:    JUMP    end      : this "stops" the program!
```

5. Translate your assembly language program in the previous problem to machine language.
```
   C0000005           JMP     start    : begin by jumping over the data area
   00000000   value:  0                : store (starting) value
   000000FF   limit:  255              : we'll be computing powers up to this amount
   00000001   one:    1                : store value
   80000000   port:   8                : store port
   00000000   start:  LOAD    value    : bring the value into accumulator to use
   30000008           WRITE   port     : output the current value to port
   40000001           ADD     one      : add 1 to the value
   10000001           STORE   value    : store it (for next time)
   50000002           SUB     limit    : we need to compare with limit, subtracting helps
   E0000003           JLZ     start    : if not yet past limit, keep going
   C000000B   end:    JUMP    end      : this "stops" the program!
```

6. For the sample single-accumulator computer discussed in class, write a complete assembly language program in the ```stanley/penguin``` language that computes a greatest common divisor. Assume the two inputs are read in from port ```0x100```. Write the result to port ```0x200```. You do not need to write machine code for this problem.
```

```

7. For the sample single-accumulator computer discussed in class, give a code fragment, in assembly language of the ```stanley/penguin``` language, that swaps the accumulator and memory address ```0x30AA```. You do not need to write machine code for this problem.
```
        JMP     start   : begin by jumping over the data area
mem:    30AA
temp:   1
accum:  0
start:  LOAD    accum   : load the value from accumulator
        STORE   temp    : store the accumulator value in a temporary address
        LOAD    mem     : load the value from 0x30AA
        STORE   accum   : store the value in the accumulator 
        LOAD    temp    : load the accumulator value from temporary address
        STORE   mem     : store the accumulator in address 0x30AA
   

```

8. For the sample single-accumulator computer discussed in class, give a code fragment, in assembly language of the ```stanley/penguin``` language that has the effect of jumping to the code at address ```0x837BBE1``` if the value in the accumulator is greater than or equal to ```0```. You do not need to write machine code for this problem.
```
   C0837BE1           JZ   : jumps to 0x837BBE1 if accumulator is zero
   C0837BE1           JLZ  : jumps to 0x837BBE1 if accumulator is greater than zero
```

9. **Part 1 of 2:** Explain, at a high-level, what the following sequence of instructions does. In other words, suppose a programmer has stored data in r8 and r9. After executing these instructions, what does the programmer notice about the data?

          xor r8, r9
          xor r9, r8
          xor r8, r9
```
step-by-step:  r8 | r9  --first-instruction-->  r8 | r9  --second-instruction-->  r8 | r9  --third-instruction-->  r8 | r9
                1 | 1                            0 | 1                             0 | 1                            1 | 1
                1 | 0                            1 | 0                             1 | 1                            0 | 1
                0 | 1                            1 | 1                             1 | 0                            1 | 0
                0 | 0                            0 | 0                             0 | 0                            0 | 0


After the first instruction, r8 contains the bitwise xor of the values in r8 and r9.
After the second instruction, the original value of r8 is stored in r9 since r9 xor'ed with r8.
After the third instruction, the original value of r9 is stored in r8 since r8 xor'ed with r9.

The values of r8 and r9 are swapped.
```

   **Part 2 of 2:** Also state as briefly as possible why that effect happens.
```
XORing a value A and value B twice will result in value A.
```

