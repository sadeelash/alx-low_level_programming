#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The head node's data (n).
 *         If the linked list is empty, return 0.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}

