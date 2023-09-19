#include "main.h"

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

	/* Handle leading '+' or '-' signs */
	if (s[0] == '-')
	{
		sign = -1; /* Set sign as negative */
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	/* Process digits to form the integer */
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break; /* Stop if a non-digit character is encountered */
		}
		i++;
	}

	return (result * sign); /* Apply the sign to the result */
}

