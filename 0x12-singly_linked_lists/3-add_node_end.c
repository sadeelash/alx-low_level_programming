#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	char *str_copy;
	size_t str_len = 0;

	/* Calculate the length of the input string */
	while (str && str[str_len])
		str_len++;

	/* Duplicate the input string using strdup */
	str_copy = str ? strdup(str) : NULL;

	if (str && !str_copy)
		return (NULL);

	/* Create a new node */
	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		free(str_copy);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}

