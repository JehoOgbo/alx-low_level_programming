#include "lists.h"

/**
 * add_node - adds a node to the beginning of the list
 * @head: pointer to firat element of the list
 * @str: new element to be added
 *
 * Return: adress of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	ptr->len = len;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
