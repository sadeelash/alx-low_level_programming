/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptrDest = dest;

	while (*ptrDest)
		ptrDest++;

	while (*src)
	{
		*ptrDest = *src;
		ptrDest++;
		src++;
	}

	*ptrDest = '\0';

	return (dest);
}

