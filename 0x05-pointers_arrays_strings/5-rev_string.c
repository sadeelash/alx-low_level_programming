#include "main.h"
#include <string.h>

/**
 * reverse_string - Reverses a string.
 * @s: The string to be reversed.
 */
void reverse_string(char *s)
{
	int i, length = strlen(s), j = 0;
	char temp;

	for (i = length - 1; i >= length / 2; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}

