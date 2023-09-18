#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by a comma
 * and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long a = 1, b = 2, c;
    int i;

    printf("%lu, %lu", a, b);

    for (i = 3; i <= 98; i++)
    {
        c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }

    printf("\n");

    return (0);
}

