#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * incase of collisions create a linked list
 *
 * @ht: the hash table you want to add or update to
 * @key: the key to be used for the update. Cannot be an empty string
 * @value: the value to be updated to the key. can be empty
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;
	hash_node_t *head;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = (char *)strdup(key);
	new->value = (char *)strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	/* incase the key already exists, update the value */
	head = ht->array[index];
	while (head)
	{
		if (strcmp(new->key, head->key) == 0)
		{
			free(head->value);
			head->value = strdup(new->value);
			free(new->key);
			free(new->value);
			free(new);
			return (1);
		}
		head = head->next;
	}

	/* incase of collision, add new node at the beginning of the list */
	head = ht->array[index];
	ht->array[index] = new;
	ht->array[index]->next = head;

	return (1);
}
