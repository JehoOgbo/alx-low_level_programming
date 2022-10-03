#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of characters and
 * initialize it with a specific character
 *
 * @size: length of the array
 * @c: character used for initialization
 * Return: NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		ptr[i] = c;
	ptr[i] = '\0';
	return (ptr);
}
