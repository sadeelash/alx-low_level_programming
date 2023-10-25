#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space with concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string */
	concat_str = (char *)malloc(len1 + len2 + 1);

	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 into the concatenated string */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* Copy s2 into the concatenated string */
	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';  /* Null-terminate the concatenated string */

	return (concat_str);
}

