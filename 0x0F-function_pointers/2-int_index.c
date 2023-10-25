#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function to compare values.
 *
 * Return: Index of the first element for which cmp doesn't return 0.
 *         If no element matches, return -1.
 *         If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

