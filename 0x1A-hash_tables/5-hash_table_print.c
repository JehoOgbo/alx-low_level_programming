#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table to be printed
 * Print the key/value in the order they appear in th array of hash table
 * Order: array, list
 * If ht is NULL don't print anything
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *list;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	i = 0;
	printf("{");
	while (i < ht->size)
	{
		list = ht->array[i];
		if (list != NULL)
		{
			while (list)
			{
				printf("'%s': '%s', ", list->key, list->value);
				list = list->next;
			}
		}
		i++;
	}
	printf("\b\b}\n");
}
