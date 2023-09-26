#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s); /* Found the character, return its address */
		s++;
	}

	if (*s == c)
		return (s); /* Handle the case where c is the null terminator */

	return (NULL); /* Character not found, return NULL */
}

