#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 *
 * @h: pointer to the first element of the list
 * Return: the numger of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *iterator;
	int i = 0;

	iterator = h;
	while (iterator)
	{
		iterator = iterator->next;
		i++;
	}
	return (i);
}
