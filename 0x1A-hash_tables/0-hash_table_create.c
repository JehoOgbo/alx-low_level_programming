#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 *
 * Return: pointer to newly created hash table or NULl if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);
	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);	/* incase malloc failed */
	table->size = size;
	table->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
