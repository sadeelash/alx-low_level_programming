#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords for 101-crackme.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int passwordSum;
    char randomChar;

    srand(time(NULL));
    passwordSum = 0;

    while (passwordSum <= 2645)
    {
        randomChar = rand() % 128;
        passwordSum += randomChar;
        putchar(randomChar);
    }

    putchar(2772 - passwordSum);

    return (0);
}

