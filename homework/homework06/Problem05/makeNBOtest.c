#include <stdio.h>
#include "makeNBOC.c"

int main()
{
    unsigned int number = 0x12345678;
    unsigned int networkOrder = convertToNetworkByteOrder(number);

    printf("Original number: 0x%X\n", number);
    printf("Network Byte Order: 0x%X\n", networkOrder);

    return 0;
}