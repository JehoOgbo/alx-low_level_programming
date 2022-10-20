#include "lists.h"	/* Header file already includes other needed headers */

/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to pointer to the first element of the array
 * @str: string to be added as part of the node
 *
 * Return: address of the new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str1;
	list_t *ptr = malloc(sizeof(list_t));
	list_t *iterate;

	if (!ptr)
		return (NULL);
	str1 = strdup(str);	/* copy new the string literal */
	if (!str1)
		return (NULL);
	ptr->str = str1;
	ptr->len = strlen(str1);
	ptr->next = NULL;
	/* get the last element of the list and set its pointer to new node */
	iterate = *head;	/* set iterate to value of 1st node */
	if (iterate == NULL)
		*head = ptr;
	else
	{
		while (iterate->next)
		{
			iterate = iterate->next;
		}
		iterate->next = ptr;	/* setting pointer to new node */
	}

	return (*head);	/* return address of new element */
}
