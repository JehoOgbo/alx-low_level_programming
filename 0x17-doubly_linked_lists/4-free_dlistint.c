#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: head node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
	{
		return;
	}

	while (head->next)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(head);
}
