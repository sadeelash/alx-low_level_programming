#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length of string
**/

int _strlen(char *s)
{
		int i;

		for (i = 0; s[i] != '\0'; i++)
			;

		return (i);
}
