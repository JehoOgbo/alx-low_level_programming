#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *previous, *head = *h;
	unsigned int i = 0;

	if (head == NULL)
	{	/* special case if head is NULL and idx is 0 */
		if (idx == 0)
			return (add_dnodeint(h, n));
		return (NULL);	/* index out of range */
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);	/* malloc failure */
	new->n = n;
	while (head->next && i != idx)
	{
		i++;
		head = head->next;
	}
	if (i == idx)
	{	/* add node to middle or beginning of list */
		current = head;
		previous = head->prev;
		new->prev = previous;
		new->next = current;
		if (previous)	/* case for idx == 0 */
			previous->next = new;
		current->prev = new;
		if (idx == 0)
			*h = new;
		return (new);
	}
	if (idx == ++i)
	{	/* add node to the end of the list */
		new->next = NULL;
		new->prev = head;
		head->next = new;
		return (new);
	}
	return (NULL);	/* index out of range */
}
