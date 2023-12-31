/* assemble:  nasm -f win32 findGCDfunc.nasm
 * compile/link:  gcc -m32 gcdFinder.c findGCDfunc.o -o gcdFinder.exe
 */
    
#include <stdio.h>
#include <assert.h>

extern int findGCDfunc(int x, int y);

int main() {
    int x = 0;
    int y = 0;
    int z = 0;
    int gcd = 0;

    printf( "\nEnter a number: " );
    scanf( "%d", &x );
    printf( "Enter a number: " );
    scanf( "%d", &y );

    for (z = 1; z <= x && z <= y; ++z) {
        if(x % z == 0 && y % z == 0)
            gcd = z;
    }

    z = findGCDfunc(x, y);
    assert(z == gcd);

    printf("\nGCD: %d", gcd);
    return 0;
}
