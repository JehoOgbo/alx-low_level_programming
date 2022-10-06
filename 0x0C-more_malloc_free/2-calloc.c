#include "main.h"
#include <stdlib.h>

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
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	/*for (i = 0; i < nmemb; ++i)
		memory[i] = NULL;*/
	return (memory);
}
