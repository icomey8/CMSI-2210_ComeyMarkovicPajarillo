#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char * argv[] ) {
   
   if (argc == 0 || argc == 1) {
      printf("\nSorry, you need to provide at least two integers:  starting balance and interest rate percent.\n" );
      exit(0);
   }

   if (argc > 2) {
      printf("\nSorry, you have too many arguments.  \nYou need to provide at least two integers:  starting balance and interest rate percent.\n" );
      exit(0);
   }

    int balances[4];
    balances[0] = argv[1];
    for (int i=0; i < 5; i++) {
        float interest_percent = (int)(char)argv[2]*0.01f + 1.0;
        float balance_unrounded = (balances[i])*interest_percent;
        balances[i+1] = balance_unrounded;
    }

    printf("Initial balance:", balances[0]);
    printf("Annual interest rate in percent:", argv[2]);
    printf("After first month:", balances[1]);
    printf("After second month:", balances[2]);
    printf("After third month:", balances[3]);
}