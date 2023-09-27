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
= 0(16^3) + 0(16^2) + 6(16^1) + 4(16^0)
= 0 + 0 + 96 + 4
= 100
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
8000 = 0x1F40
Same as unsigned.
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

= 0xFFF5 
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

= 0x8033

```

14. Binary 10111101 in hex is:
```
= 2^7 + 2^5 + 2^4 + 2^3 + 2^2 + 2^0
= 128 + 32 + 16 + 8 + 4 + 1
= 189
	189
       /    \
      11     13
= 0xBD

```

15. Binary 1011110100000001 as an unsigned decimal is:
```
= 2^15 + 2^13 + 2^12 + 2^11 + 2^10 + 2^8 + 2^0
= 32768 + 8192 + 4096 + 2048 + 1024 + 256 + 1
= 48385

```

16. Binary 1011110100000001 as a signed decimal is:
```
= 1011 1101 0000 0001
= BD01
= FFFF - BD01
= 42FE + 1
= 42FF
= 4(16^3) + 2(16^2) + 15(16^1) + 15(16^0)
= 16384 + 512 + 2140 + 15
= 17151 * -1
= -17151

```

17. If we had 20-bit registers, the smallest signed decimal integer value would be:
```
= -1 * (2^18 + 2^17 + 2^16 + 2^15 + 2^14 + 2^13 + 2^12 + 2^11 + 2^10 + 2^9 + 2^8 + 2^7 + 2^6 + 2^5 + 2^4 + 2^3 + 2^2 + 2^1 + 0)
= -524286
```

18. If we had 20-bit registers, the largest signed decimal integer value would be:
```
= 1 * (2^18 + 2^17 + 2^16 + 2^15 + 2^14 + 2^13 + 2^12 + 2^11 + 2^10 + 2^9 + 2^8 + 2^7 + 2^6 + 2^5 + 2^4 + 2^3 + 2^2 + 2^1 + 2^0)
= 524287

```

19. The modular sum of 16-bit hex values 3511 + 4FFC is:
```
   1 1
    3 5 1 1
  - 4 F F C
   _________
    8 5 0 D
= 850D
```

20. The saturated sum of 16-bit hex values 3511 + 4FFC is:
```
   1 1
    3 5 1 1
  - 4 F F C
   _________
    8 5 0 D
= 850D
```

21. The 16-bit operation 0x3511 + 0x4FFC has a carry (Y or N):
```
N

```

22. The 16-bit operation 0x3511 + 0x4FFC has a overflows (Y or N):
```
Y
```


## B-Level Problems

2. The modular sum of 16-bit hex values 6159 + F702 is:
```
6159 = 0110 0001 0101 1001
F702 = 1111 0111 0000 0010
     	 ________________+
    0001 0101 1000 0101 1011
ignore the carry
6159 + F702 = 0x585B
```

3. The saturated sum of 16-bit hex values 6159 + F702 is:
```
6159 + F702 = 0x1585B = 88155 
overflow 
the maximum representable value is 65535

			65535
		        /    \ 
		     4095     15
		    /    \
		  255     15
		 /    \
	       15     15
	
65535 = 0xFFFF
```

4. The 16-bit operation 0x6159 + 0xF702 has a carry (Y or N):
```
Yes, because the hex value 1 carries over 1 extra hex digit

```

5. The 16-bit operation 0x6159 + 0xF702 has a overflows (Y or N):
```
No, because 0x6159 is positive as a signed decimal and 0xF702 is negative as a signed decimal.

```

6. The modular sum of 16-bit hex values EEEE + C00C is:
```
EEEE = 1110 1110 1110 1110
C00C = 1100 0000 0000 1100
	________________+
       1010 1110 1111 1010

ignore the carry
EEEE + C00C = 0xAEFA
```

7. The saturated sum of 16-bit hex values EEEE + C00C is:
```
EEEE + C00C = 0x1AEFA = 110330
the maximum representable value is 65535
65535 = 0xFFFF
```

8. The 16-bit operation 9EEE + AB0C has a carry (Y or N):
```
                 1
	 1001 1110 1110 1110 
+ 1010 1011 0000 1100
________________________

	Answer: Yes, there is a carry.

```

9. The 16-bit operation 9EEE + AB0C has a overflows (Y or N):
```
	 1001 1110 1110 1110 
+ 1010 1011 0000 1100
________________________
  01 0100 1001 1111 1010

	Answer: Yes, the addition of two negatives does yield a positive result.

```

10. The negation of 16-bit word 0xB00F is:
```
	= B00F
	= 1011 0000 0000 1111
	= 0100 1111 1111 0000
	= 0100 1111 1111 0001

```

11. The negation of 16-bit word 0x2232 is:
```
	= 2232
	= 0010 0010 0011 0010
	= 1101 1101 1100 1101
	= 1101 1101 1100 1110

```

12. The negation of 16-bit word 0x8000 is:
```
	= 1000 0000 0000 0000
	= 0111 1111 1111 1111
	= 1000 0000 0000 0000

```

13. The negation of 32-bit word 0xFFF329BA is:
```
= FFF329BA
= 1111 1111 1111 0011 0010 1001 1011 1010
= 0000 0000 0000 1100 1101 0110 0100 0101
                                      + 1
__________________________________________
= 0000 0000 0000 1100 1101 0110 0100 0110

```

14. 96.03125 as a 32-bit float, in hex is:
```
      96                    0.3125
    /    \                  /    \
    6     0                0.5    0
                          /    \
                          0     8
= 60.080
= 0x60.08

```

15. -16777216 as a 32-bit float, in hex is:
```
                        16777216
                         /    \
                   1048576     0
                   /    \
               65536     0
              /    \
           4096     0
          /    \
        256     0
      /    \
     16     0
   /    \
  1     0
= 0x-1000000
```

16. Hex 43700000, when interpreted as an IEEE-754 pattern, is in decimal:
```
= 0100 0011 0111 0000 0000 0000 0000 0000
S: 0 (positive)
E: 1000 0110 -> 134 - 127 = 7
F: 11100000000000000000000 -> 1.111
= 1.111 * 2^7 = 11110000
= 240

```

17. Hex C0FF0000, when interpreted as an IEEE-754 pattern, is in decimal:
```
= 1100 0000 1111 1111 0000 0000 0000 0000
S: 1 (negative)
E: 1000 0001 -> 129 - 127 = 2
F: 11111110000000000000000 -> 1.1111111
= 1.1111111 * 2^2 = 111.11111
= 7.96875

```


## A-Level Problems

2. The largest finite IEEE-754 single precision float, in hex is:
```
S: 0 (positive)
E: 11111110 (max bits before reaching infinity or NaN)
F: 11111111111111111111111 (max bits)

0111 1111 0111 1111 1111 1111 1111 1111

0x7F7FFFFF
```

3. The smallest finite IEEE-754 single precision float, in hex is:
```
S: 1 (negative)
E: 11111110 (max bits before reaching infinity or NaN)
F: 11111111111111111111111

1111 1111 0111 1111 1111 1111 1111 1111

0xFF7FFFFF
```

4. The largest nonzero negative IEEE-754 single precision float, in hex is:
```
S: 1 (negative)
E: 11111111 (max bits)
F: 00000000000000000000001

1000 0000 0000 0000 0000 0000 0000 0001

0x80000001
```

5. The smallest nonzero positive IEEE-754 single precision float, in hex is:
```
S: 0 (positive)
E: 00000000
F: 00000000000000000000001

0000 0000 0000 0000 0000 0000 0000 0001

0x00000001

```

6. -5.125 X 2^90 as a 32-bit float, in hex is:
```
= -5.125 * 2^(90)
= -6.3444427 * 10^(27)
= -6.344442700000000000000000000
= 0xc0cb05ad

```

7. 2^(-138) as a 32-bit float, in hex is:
```
= 1.0 * 2^(-138)
= 2.86985925 * 10^(-42)
= .00000000000000000000000000000000000000000286985925
max input length exceeded
= 0x40cb05ad

```

8. 1.5 X 2^(-143) as a 32-bit float, in hex is:
```
= 1.5 * 2^(-142)
= 1.34524653 * 10^(-43)
= .000000000000000000000000000000000000000000134524653
max input length exceeded
= 0x40cb05ad

```
