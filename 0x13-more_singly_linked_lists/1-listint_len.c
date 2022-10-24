#include "lists.h"

/**
 * listint_len - finds number of elements in a
 * 		listint_t singly linked list.
 * @h: pointer to the first element of the list
 *
 * Return: number of elements in the list 
 */
size_t listint_len(const listint_t *h)
{
	unsigned int index;	/* declare variable to hold index of nodes */

	while (h)		/* executes while h is not null */
	{
		h = h->next;	/* sends h into the next node */
		index++;	/* increment the index for every node */
	}

	return (index);		/* return number of elements */
}
