#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: A pointer to the result string, or 0 if the result cannot fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, k, l, m, n;

    /* Calculate the lengths of n1 and n2 */
    for (i = 0; n1[i]; i++)
        ;
    for (j = 0; n2[j]; j++)
        ;

    /* Check if the result can fit in the buffer */
    if (i > size_r || j > size_r)
        return (0);

    m = 0;
    /* Perform addition */
    for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
    {
        n = m;
        if (i >= 0)
            n += n1[i] - '0';
        if (j >= 0)
            n += n2[j] - '0';
        if (i < 0 && j < 0 && n == 0)
        {
            break;
        }
        m = n / 10;
        r[k] = n % 10 + '0';
    }

    r[k] = '\0';

    /* Check if there are any remaining digits */
    if (i >= 0 || j >= 0 || m)
        return (0);

    /* Reverse the result string */
    for (k -= 1, l = 0; l < k; k--, l++)
    {
        m = r[k];
        r[k] = r[l];
        r[l] = m;
    }

    return (r);
}

