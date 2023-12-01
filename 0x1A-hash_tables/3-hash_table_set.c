#include "hash_tables.h"

/**
 * hast_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update key value pair to
 * @key: the key to be added
 * @value: the value to be associated with the key
 *
 * Return: 1 if success and 0 otherwise
 * In case of collision, add a new node at the beginning of a list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *current;
	unsigned long int index;

	/* create a new hash table item */
	/* *first create space for the item itself, key and value */
	item = (hash_node_t *) malloc(sizeof(hash_node_t));
	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);
	/* copy the key and value into the allocated space */
	strcpy(item->key, key);
	strcpy(item->value, value);

	index = key_index((const unsigned char *) key, ht->size);

	current = ht->item[index];
	if (current_item == NULL)
	{
		/* key does not exist */
		if (index == table->size)
			return (NULL);
	}
	table->item[index] = item;
}
