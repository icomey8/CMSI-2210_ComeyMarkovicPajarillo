#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char * argv[] ) {

   char * alphabet[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
                        "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

   char * morse_alphabet[] = {"._", "_...", "_._.", "_..", ".", ".._.", "_ _.", "....", "..", "._ _ _", "_._", "._..", "_ _",
                              "_ .", "_ _ _", "._ _.", "_ _ . _", ". _ .", "...", "_", ".._", "..._", "._ _", "_.._", "_._ _", "_ _ .."};
   
   if( argc == 1 ) {
      printf("\nSorry, you need to provide at least one word as an argument.\n" );
      exit(0);
   }

   /*For each argument.*/
   for (int i = 1; i < argc; i++) {
      //For each letter in argument.//
      for (int j = 0; j < sizeof(argv[i]); j++) {
         for (int k = 0; k < sizeof(alphabet); k++) {
            //If letter matches alphabet at index, get nato equivalent.//
            if (argv[j] == alphabet[k] || argv[j] == tolower(alphabet[k])) {
               printf("\t%s", morse_alphabet[k]);
            }
         }
      }
   }
}