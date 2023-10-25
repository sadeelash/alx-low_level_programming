#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an array
 * @array: The array to process
 * @size: The size of the array
 * @action: A pointer to the function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        for (size_t i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}

