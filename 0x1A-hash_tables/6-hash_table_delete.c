#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - deletes a hash table frees all heap memory
 *
 * @ht: the hash table to be freed
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hold;
	hash_node_t *holder;

	if (ht == NULL)
		return;
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		hold = ht->array[i];
		while (hold)
		{
			holder = hold->next;
			free(hold->key);
			free(hold->value);
			free(hold);
			hold = holder;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
