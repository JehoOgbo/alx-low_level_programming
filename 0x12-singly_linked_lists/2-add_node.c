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
	char *stir;
	list_t *ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);

	stir = strdup(str);
	ptr->str = stir;
	ptr->len = strlen(stir);
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
