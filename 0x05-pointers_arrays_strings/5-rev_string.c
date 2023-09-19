#include "main.h"
#include "string.h"

/**
 * rev_string - it reverses a string
 * @s: the string 
**/

void rev_string(char *s)
{
	int i, len = strlen(s), j = 0;
	char temp;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}
