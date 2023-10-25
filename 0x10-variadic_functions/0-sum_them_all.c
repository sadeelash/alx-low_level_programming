#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of its parameters
 * @n: the number of arguments
 * @...: variable number of arguments
 *
 * Return: the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    int sum = 0;
    unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);

    return sum;
}

int main(void)
{
    int result;

    result = sum_them_all(3, 10, 20, 30);
    printf("Sum: %d\n", result);

    result = sum_them_all(4, 5, 15, 25, 35);
    printf("Sum: %d\n", result);

    result = sum_them_all(0);
    printf("Sum: %d\n", result);

    return (0);
}

