#include "main.h"
#include <limits.h>  /* Include the limits.h header for INT_MAX and INT_MIN */

/**
 * _atoi - converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;  /* Initialize sign as positive */
	int result = 0;
	int i = 0;

	/* Skip leading whitespace */
	while (s[i] == ' ')
		i++;

	/* Handle leading '+' or '-' signs */
	if (s[i] == '-')
	{
		sign = -1; /* Set sign as negative */
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Process digits to form the integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for integer overflow */
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

