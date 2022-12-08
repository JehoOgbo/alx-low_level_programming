#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of doubly linked list
 * @head: pointer to the head node of the list
 * @n: data to be added to the list
 *
 * Return: The address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *iterator;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);  /* Malloc failed */
	}
	new->n = n;
	new->next = NULL;
	iterator = *head;
	if ((*head) == NULL)  /* If head is NULL, just add to the beginning */
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (iterator->next)  /* get to list's end then set other data */
	{
		iterator = iterator->next;
	}
	new->prev = iterator;
	iterator->next = new;
	return (new);
}
