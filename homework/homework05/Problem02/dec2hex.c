// 2. Modify your "C" program from problem #1 to to make the program dec2hex.c which will output the 32-bit hexidecimal value 
// equivalent. For this modification, you must also handle an optional command line argument which indicates the number of 
// bits that the output hex value will represent, either 32 or 64. For example, running the program with dec2hex 65535 32 [or 
// just dec2hex 32 if asking the user] should produce the output string 0x0000FFFF. Running the program with dec2hex 65535 64 
// [or just dec2hex 64] will result in the output of 0x000000000000FFFF. Use unsigned integers.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {

    if (argc == 1 ) {
      printf("\nSorry, you need to input the digits 32 or 64 to convert decimal to 32-bit or 64-bit hexidecimal.\n" );
      exit(0);
    }

    else if (argc > 2) {
      printf("\nSorry, you have too many arguments.  \nYou need to input the digits 32 or 64 to convert decimal to 32-bit or 64-bit hexidecimal.\n" );
      exit(0);
    }

    int bit_length = * argv[1]; 
    int decimal_input;
    printf("Enter an integer: ");  
    scanf("%d", &decimal_input);

    char hexString[16];
    itoa(decimal_input, hexString, 16);

    int zeroLen = bit_length/4 - strlen(hexString);
    char zeroString[18] = "0x";
    for (int i = 0; i < zeroLen; i++) {
        strcat(zeroString, "0");
    }

    strcat(zeroString, hexString);
    printf("\nHex: %s", zeroString);
    return 0;
}