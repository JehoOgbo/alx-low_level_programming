#include "main.h"

/**
 * list_len - finds the number of elements in a list
 * @h - pointer to nodal struct
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)	/* while h is not null */
	{
		i++;
		h = h->next;
	}
	return (i);
}
