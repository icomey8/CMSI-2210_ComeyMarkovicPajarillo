#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

int main()
{
    printf("This program will time how long you can hold your breath. Take a deep breath, then press the 'Enter' key. When you absolutely have to exhale, press the enter key again. The duration will be displayed in minutes and seconds.\n");

    int fcntl_flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, fcntl_flags | O_NONBLOCK);

    char ch = 0;
    int minutes = 0;
    int seconds = 0;
    int milliseconds = 0;

    // Wait for initial Enter press
    while (read(STDIN_FILENO, &ch, 1) != 1 || ch != '\n')
        ;

    while (1)
    {
        printf("\r\t%.2d MINUTES : %.2d SECONDS : %.3d MILLISECONDS", minutes, seconds, milliseconds);
        fflush(stdout);
        usleep(1000);
        ++milliseconds;
        if (milliseconds == 1000)
        {
            milliseconds = 0;
            ++seconds;
        }
        if (seconds == 60)
        {
            seconds = 0;
            ++minutes;
        }
        // Check for second Enter press without blocking
        if (read(STDIN_FILENO, &ch, 1) == 1 && ch == '\n')
        {
            break;
        }
    }

    printf("\nYou held your breath for %.2d minutes, %.2d seconds, and %.3d milliseconds.\n", minutes, seconds, milliseconds - 1);

    return 0;
}