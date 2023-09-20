## C-Level Problems:

1. Hex FAC3 in binary is:
```
= (1111) + (1010) + (1100) + (0011)
= 1111 1010 1100 0011
```

2. Hex FAC3 as an unsigned decimal is:
```
= 15(16^3) +  10(16^2) + 12(16^1) + 3(16^0)
= 61440 + 2560 + 192 + 3
= 64195
```
 
3. Hex FAC3 as a signed decimal is:
```
= FFFF - FAC3
= 053C + 1
= 053D
= 0(16^3) + 5(16^2) + 3(16^1) + 13(16^0)
= 1280 + 48 + 13
= -1341
```

4. Hex 0064 in binary is:
```
= 0000 + 0000 + 0110 + 0100
= 0000 0000 0110 0100
```

5. Hex 0064 as an unsigned decimal is:
```
= 0(16^3) + 0(16^2) + 6(16^1) + 4(16^0)
= 0 + 0 + 96 + 4
= 100
```

6. Hex 0064 as a signed decimal is:
```
= 100 * -1
= -100
```

7. Hex 8000 in binary is:
```
= (1000) +  (0000) +  (0000) + (0000)
= 1000 0000 0000 0000
```

8. Hex 8000 as an unsigned decimal is:
```
(8*16^3) + (0*16^2) + (0*16^1) + (0*16^0) = 
32768 + 0 + 0 + 0 = 
32768
```

9. Hex 8000 as a signed decimal is:
```
Hex 8000 to binary = 1000000000000000
Most Significant Bit = 1
-32768
```

10. Decimal 8000 encoded in 16-bits (unsigned) is in hex:
```
	8000
	/   \
    500	     0
    /   \
  31     4
 /  \
1    15

0x1F40
```

11. Decimal 8000 encoded in 16-bits (signed) is in hex:
```
8000 = 0x1F40 = 0001 1111 0100 0000

1110 0000 1011 1111
________________+1
1110 0000 1100 0000

8000 = 0xE0C0
```

12. Decimal -11 encoded in 16-bits (signed) is in hex:
```
	11
      /    \
     0     11

11 = 0x0B = 0000 0000 0000 1011

1111 1111 1111 0100
_______________+1
1111 1111 1111 0101

-11 = 0xFFF5 
```

13. Decimal -32717 encoded in 16-bits (signed) is in hex:
```
			32717
                       /    \
	            2044     13
         	   /    \
                 127     12
                /   \
               7     15

32717 = 0x7FCD = 0111 1111 1100 1101
			   
1000 0000 0011 0010
_______________+1
1000 0000 0011 0011

-32717 = 0x8033

```

14. Binary 10111101 in hex is:
```

```

15. Binary 1011110100000001 as an unsigned decimal is:
```

```

16. Binary 1011110100000001 as a signed decimal is:
```

```

17. If we had 20-bit registers, the smallest signed decimal integer value would be:
```

```

18. If we had 20-bit registers, the largest signed decimal integer value would be:
```

```

19. The modular sum of 16-bit hex values 3511 + 4FFC is:
```

```

20. The saturated sum of 16-bit hex values 3511 + 4FFC is:
```

```

21. The 16-bit operation 0x3511 + 0x4FFC has a carry (Y or N):
```

```

22. The 16-bit operation 0x3511 + 0x4FFC has a overflows (Y or N):
```

```


## B-Level Problems

1. The modular sum of 16-bit hex values 6159 + F702 is:
```
6159 = 0110 0001 0101 1001
F702 = 1111 0111 0000 0010
     	 ________________+
    0001 0101 1000 0101 1011
ignore the carry
6159 + F702 = 0x585B
```

2. The saturated sum of 16-bit hex values 6159 + F702 is:
```
6159 + F702 = 0x1585B = 88155 
overflow 
the maximum representable value is 65536

                          65536
			/        \ 
		       4096     0
		     /     \
		    256    0
		   /   \
	          16    0
	          / \
	         1    0
	
65536 = 0x10000
```

3. The 16-bit operation 0x6159 + 0xF702 has a carry (Y or N):
```
Yes, because the hex value 1 carries over 1 extra hex digit

```

4. The 16-bit operation 0x6159 + 0xF702 has a overflows (Y or N):
```
Yes, because the value passes the 16-bit decimal limit

```

5. The modular sum of 16-bit hex values EEEE + C00C is:
```
EEEE = 1110 1110 1110 1110
C00C = 1100 0000 1100 0000
	________________+
       0010 1010 1111 1010 1110
ignore the carry
EEEE + C00C = 0xAFC0
```

6. The saturated sum of 16-bit hex values EEEE + C00C is:
```
EEEE + C00C = 0xAFC0 = 110330
overflow 
the maximum representable value is 65536
65536 = 0x10000
```

7. The 16-bit operation 9EEE + AB0C has a carry (Y or N):
```
                 1
	 1001 1110 1110 1110 
+ 1010 1011 0000 1100
________________________

	Answer: Yes, there is a carry.

```

8. The 16-bit operation 9EEE + AB0C has a overflows (Y or N):
```
	 1001 1110 1110 1110 
+ 1010 1011 0000 1100
________________________
  01 0100 1001 1111 1010

	Answer: Yes, the addition of two negatives does yield a positive result.

```

9. The negation of 16-bit word 0xB00F is:
```
	= B00F
	= 1011 0000 0000 1111
	= 0100 1111 1111 0000
	= 0100 1111 1111 0001

```

10. The negation of 16-bit word 0x2232 is:
```
	= 2232
	= 0010 0010 0011 0010
	= 1101 1101 1100 1101
	= 1101 1101 1100 1110

```

11. The negation of 16-bit word 0x8000 is:
```
	= 1000 0000 0000 0000
	= 0111 1111 1111 1111
	= 1000 0000 0000 0000

```

12. The negation of 32-bit word 0xFFF329BA is:
```

```

13. 96.03125 as a 32-bit float, in hex is:
```

```

14. -16777216 as a 32-bit float, in hex is:
```

```

15. Hex 43700000, when interpreted as an IEEE-754 pattern, is in decimal:
```

```

16. Hex C0FF0000, when interpreted as an IEEE-754 pattern, is in decimal:
```

```


## A-Level Problems

1. The largest finite IEEE-754 single precision float, in hex is:
```
S: 0 (positive)
E: 11111111 (max bits)
F: 00000000000000000000000

0111 1111 1000 0000 0000 0000 0000 0000

0x7F800000
```

2. The smallest finite IEEE-754 single precision float, in hex is:
```
S: 0 (positive)
E: 00000001 (max bits)
F: 00000000000000000000000

0000 0000 1000 0000 0000 0000 0000 0000

0x00800000
```

3. The largest nonzero negative IEEE-754 single precision float, in hex is:
```
S: 1 (negative)
E: 11111111 (max bits)
F: 00000000000000000000000

1111 1111 1000 0000 0000 0000 0000 0000

0xFF800000
```

4. The smallest nonezero positive IEEE-754 single precision float, in hex is:
```
According to University of Illinois, it is 1.2 * 10^-38.

https://courses.physics.illinois.edu/cs357/sp2020/notes/ref-4-fp.html#:~:text=IEEE%2D754%20Single%20precision%20(32%20bits)%3A&text=Smallest%20positive%20subnormal%20FP%20number,%E2%89%881.4%C3%9710%E2%88%9245

```

5. -5.125 X 290 as a 32-bit float, in hex is:
```
= 0xc0a40000

```

6. 2-138 as a 32-bit float, in hex is:
```

```

7. 1.5 X 2-143 as a 32-bit float, in hex is:
```

```



