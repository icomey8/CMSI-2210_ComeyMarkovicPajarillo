#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int arg, char *argv[])
{

    char input[25];
    int value;
    int length = 0;
    int sum;
    int torf = 1;
    int average;
    char numStr[250];
    int strCount = 0;
    int sevenCount = 0;

    while (torf)
    {
        if (length >= 25)
        {
            printf("\n You have reached your element limit");
            break;
        }
        printf("\n enter integers (less than 25 elements), if done enter -9999: ");
        fgets(input, 10, stdin);
        value = atol(input);

        if (value == -9999)
        {
            torf = 0;
        }
        else
        {
            length++;
            sum += value;
            char tempStr[10];
            sprintf(tempStr, "%d", value);
            strcat(numStr, tempStr);
        }
    }

    average = sum / length;

    while (numStr[strCount] != '\0')
    {
        if (numStr[strCount] == '7')
        {
            sevenCount++;
        }
        strCount++;
    }

    printf("\n sum: %d", sum);
    printf("\n average: %d", average);
    printf("\n count: %d", length);
    printf("\n your numbers: %s", numStr);
    printf("\n you have %d seven(s)", sevenCount);
}