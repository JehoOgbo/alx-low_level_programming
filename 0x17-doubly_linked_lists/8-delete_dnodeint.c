#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head of linked list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current, *h = *head, *nexter, *previous;

	if (*head == NULL)
		return (-1);  /* Empty linked list. Failure */
	while (h->next && i != index)
	{
		i++;
		h = h->next;
	}

	if (i == index)
	{
		current = h;
		previous = current->prev;
		nexter = current->next;
		if (previous)
			previous->next = nexter;
		if (nexter)
			nexter->prev = previous;
		if (index == 0)
			*head = nexter;
		free(current);
		return (1);
	}
	return (-1);
}
