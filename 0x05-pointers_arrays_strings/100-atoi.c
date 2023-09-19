#include "main.h"

/**
 * customAtoi - Convert a string to an integer.
 * @str: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int customAtoi(char *str)
{
    int isNegative = 1;
    unsigned int result = 0;

    while (*str)
    {
        if (*str == '-')
        {
            isNegative *= -1;
        }
        else if (*str >= '0' && *str <= '9')
        {
            result = (result * 10) + (*str - '0');
        }
        else if (result > 0)
        {
            break;
        }
        str++;
    }

    return (result * isNegative);
}

