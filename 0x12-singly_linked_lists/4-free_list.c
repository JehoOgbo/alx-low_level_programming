#include "lists.h"

/**
 * free_list - frees a list of type list_t (defined in header file)
 * @head: pointer to the first element in the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	/* declare variable to be used as iterator */
	list_t *ptr;

	/* assign variable to head i.e pointer to first element */
	ptr = head;
	/* iterate through & free all the elements of the list */
	while (ptr->next)	/* since they all had allocated memory */
	{
		ptr = ptr->next;
		free(ptr);
	}
	free(head);
}
