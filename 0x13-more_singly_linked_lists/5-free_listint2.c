#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to first element of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *freer, *i;	/* declare pointer to be used for freeing */

	i = *head;
	while ((freer = i) != NULL)	/* do while unfreed elements exist */
	{
		i = i->next;	/* set head to the next element */
		free(freer);	/* free the memory allocated to the element */
	}
	*head = NULL;
}
