#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize memory to zero */
	for (i = 0; i < (nmemb * size); i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}

