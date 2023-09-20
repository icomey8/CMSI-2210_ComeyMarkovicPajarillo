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

```

9. Hex 8000 as a signed decimal is:
```

```

10. Decimal 8000 encoded in 16-bits (unsigned) is in hex:
```

```

11. Decimal 8000 encoded in 16-bits (signed) is in hex:
```

```

12. Decimal -11 encoded in 16-bits (signed) is in hex:
```

```

13. Decimal -32717 encoded in 16-bits (signed) is in hex:
```

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

```

2. The saturated sum of 16-bit hex values 6159 + F702 is:
```

```

3. The 16-bit operation 0x6159 + 0xF702 has a carry (Y or N):
```

```

4. The 16-bit operation 0x6159 + 0xF702 has a overflows (Y or N):
```

```

5. The modular sum of 16-bit hex values EEEE + C00C is:
```

```

6. The saturated sum of 16-bit hex values EEEE + C00C is:
```

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

```

2. The smallest finite IEEE-754 single precision float, in hex is:
```

```

3. The largest nonzero negative IEEE-754 single precision float, in hex is:
```


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



