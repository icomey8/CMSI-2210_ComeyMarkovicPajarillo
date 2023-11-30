#include <stdio.h>
unsigned int convertToNetworkByteOrder(unsigned int num)
{
    unsigned int check = 0x543210;
    char *c = (char *)&check;

    if (*c == 0x10)
    {
        return htonl(num);
    }
    else
    {
        return num;
    }
    return 0;
}

extern unsigned int convertToNetworkByteOrderASM(unsigned int num)
{
    return convertToNetworkByteOrder(num);
}
