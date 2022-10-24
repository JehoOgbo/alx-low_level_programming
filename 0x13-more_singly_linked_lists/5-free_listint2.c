#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to first element of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *freer;	/* declare pointer to be used for freeing */

	while ((freer = *head) != NULL)	/* do while unfreed elements exist */
	{
		*head = (*head)->next;	/* set head to the next element */
		free(freer);	/* free the memory allocated to the element */
	}
	*head = NULL;
}
