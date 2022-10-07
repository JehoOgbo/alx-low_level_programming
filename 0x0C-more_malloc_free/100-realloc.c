#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * using malloc and free
 *
 * @ptr: pointer to memory previously allocated
 * with a call to malloc
 * @old_size: size in bytes of the allocated space
 * for ptr
 * @new_size: new size in bytes of the new memory
 * block
 *
 * Return: void pointer with new memory or NULL
 * if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr = malloc(new_size);

	return (ptr);
}
