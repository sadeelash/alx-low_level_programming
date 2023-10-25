#include <stdlib.h>

/**
 * _strdup - Duplicates a string in a newly allocated space in memory.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[len])
		len++;

	/* Allocate memory for the duplicated string */
	dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	/* Copy the string to the newly allocated space */
	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

