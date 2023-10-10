## Assignment #4:

1. Condsider the function with three inputs ```(A, B, C)``` and two outputs ```(X, Y)``` that works like this:

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
*** IN PROGRESS***
value:  0x00000000
limit:  0x000000FF
port:   0x80000000

start:    LOAD value
          ADD 0x00000001


```

5. Translate your assembly language program in the previous problem to machine language.
```

```

6. For the sample single-accumulator computer discussed in class, write a complete assembly language program in the ```stanley/penguin``` language that computes a greatest common divisor. Assume the two inputs are read in from port ```0x100```. Write the result to port ```0x200```. You do not need to write machine code for this problem.
```

```

7. For the sample single-accumulator computer discussed in class, give a code fragment, in assembly language of the ```stanley/penguin``` language, that swaps the accumulator and memory address ```0x30AA```. You do not need to write machine code for this problem.
```

```

8. For the sample single-accumulator computer discussed in class, give a code fragment, in assembly language of the ```stanley/penguin``` language that has the effect of jumping to the code at address ```0x837BBE1``` if the value in the accumulator is greater than or equal to ```0```. You do not need to write machine code for this problem.
```

```

9. **Part 1 of 2:** Explain, at a high-level, what the following sequence of instructions does. In other words, suppose a programmer has stored data in r8 and r9. After executing these instructions, what does the programmer notice about the data?

          xor r8, r9
          xor r9, r8
          xor r8, r9

   **Part 2 of 2:** Also state as briefly as possible why that effect happens.
```

```
