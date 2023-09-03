#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[] ) {
 char input[25];
 printf("What is your name? ");
 fgets(input, 25, stdin);
 printf("\n\n Hello, %s \n\n", input);

}

