#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements of array
 * @size: size in bytes of each element
 * Return: pointer for allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	if (nmemb == 0 || size == 0)
		return ((void *)NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return ((void *)NULL);
	memset(memory, 0, (nmemb * size));
	return (memory);
}
