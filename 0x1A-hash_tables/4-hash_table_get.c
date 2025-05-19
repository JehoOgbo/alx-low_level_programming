#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table to be looked into
 * @key: the key you are looking for
 *
 *
 * Return: the value associated with the key or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *check;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	check = ht->array[index];
	while (check)
	{
		if (strcmp(check->key, key) == 0)
		{
			return (check->value);
		}
		check = check->next;
	}

	return (NULL);
}
