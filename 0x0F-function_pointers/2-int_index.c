#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 * @array: pointer to an integer array.
 * @size: number of elements in the array.
 * @cmp: a pointer to a function that compares integers.
 *
 * Return: the index of the first element for which cmp function does not return 0,
 * or -1 if no element matches or if array is NULL.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array == NULL || cmp == NULL)
        return (-1);

    if (size <= 0)
        return (-1);

    for (int i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }

    return (-1);
}

