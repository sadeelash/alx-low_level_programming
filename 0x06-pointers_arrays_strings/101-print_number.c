#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer parameter
 *
 * Description: This function prints an integer to the standard output.
 */
void print_number(int n)
{
    unsigned int i = n;

    if (n < 0)
    {
        _putchar('-');
        i = -i;
    }
    if (i / 10)
    {
        print_number(i / 10);
    }
    _putchar(i % 10 + '0');
}

