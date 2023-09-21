/**
 * _strncat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append to dest
 * @n: The maximum number of bytes from src to append
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptrDest = dest;
	int dest_len = 0;

	while (*ptrDest)
	{
		ptrDest++;
		dest_len++;
	}

	while (*src && n > 0)
	{
		*ptrDest = *src;
		ptrDest++;
		src++;
		n--;
	}

	if (n > 0)
		*ptrDest = '\0';

	return (dest);
}

