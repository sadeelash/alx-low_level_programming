/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}

	return (s);
}

