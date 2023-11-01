// 1. Write a C program, dec2bin.c to convert a base-10 number to its 32-bit binary value equivalent. You may take the base-10 
// number in from the command line, or you may prompt the user for the number and read in her response [your option]. Your 
// output should be a string of binary digits which correspond to the base-10 value. For example, running the program with 
// dec2bin 65535 [or just dec2bin if asking the user] should produce the output string 00000000000000001111111111111111. Use 
// unsigned integers.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int decimal_input;
    printf("Enter an integer: ");  
    scanf("%d", &decimal_input);

    char binString[32];
    itoa(decimal_input, binString, 2);

    int zeroLen = 32 - strlen(binString);
    char zeroString[32] = "";
    for (int i = 0; i < zeroLen; i++) {
        strcat(zeroString, "0");
    }

    strcat(zeroString, binString);
    printf("\nBinary: %s", zeroString);
    return 0;
}