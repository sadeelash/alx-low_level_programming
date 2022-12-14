#include "main.h"
/**
 * _strncpy - copy string
 * @dest: returns array
 * @src: pointer receives the string
 * @n: number of times to iterate
 *
 * Return: the parameter dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
