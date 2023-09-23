// terminal:  gcc example.c -o example.exe && example (creating exe and running in one line)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRY 25

int main( int argc, char * argv[] ) {

   char input[10];
   int * value = 0;
   char * input_array [MAX_ENTRY];
   int sum = 0;
   char * long_string;
   int sevens = 0;
   printf( "Hello, world!\n" );
   for( int i =0; i < MAX_ENTRY; i++ ) {
     	printf( "\nEnter an integer: " );
	   fgets( input, 10, stdin);
      if (atoi(input) != -9999) {
         input_array[i] = input;
      }

      sum += atoi(input_array[i]);
      long_string = strcat(long_string, input_array[i]);
      if (atoi(input) == 7) {
         sevens = sevens + 1;
         printf("It's a seven!");
      }

      if (atoi(input) == -9999) {
         int average = sum/(i);
         printf("sum = %d\n", sum);
         printf("average = %d\n", average);
         printf("long string = \n%s\n", long_string);
         printf("sevens = %d\n", sevens);
         break;
      }
      printf( "Input is: %s\n", input_array[i]);
   }
}