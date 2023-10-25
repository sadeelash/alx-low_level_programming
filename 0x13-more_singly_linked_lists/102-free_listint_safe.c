#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t node_count = 0;

	current = *h;
	while (current)
	{
		node_count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp < current)
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;
	return (node_count);
}

