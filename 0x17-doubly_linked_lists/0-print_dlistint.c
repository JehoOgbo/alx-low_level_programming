#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head pointer of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *iterator;
	int i = 0;

	iterator = h;
	while (iterator)
	{
		printf("%d\n", iterator->n);
		iterator = iterator->next;
		i++;
	}
	return (i);
}
