// gcc -c whichEndIsUp.c
// gcc whichEndIsUp.o
// ./a.out
// m1 chip


#include <stdio.h>

int main() {
    unsigned int check = 0x543210 ;
    char *c = (char*)&check;
    
    if (*c == 0x10) {
        printf("\n\nYour machine is Little Endian.\n\n");
    } else {
        printf("\n\nYour machine is Big Endian\n\n");
    }

    return 0;


    
}
