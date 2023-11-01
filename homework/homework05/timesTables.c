#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);

    if (n < 2)
    {
        printf("Please enter a number greater than 1.\n");
        return 1;
    };

    int maxWidth = 1;
    int maxNumber = n * n;
    while (maxNumber /= 10)
    {
        maxWidth++;
    }

    char format[20];
    sprintf(format, "%%%dd ", maxWidth);

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(format, i * j);
        }
        printf("\n");
    }
}