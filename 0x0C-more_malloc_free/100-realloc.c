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
/**	void *new_ptr;
	unsigned int i;*/

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/**new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < new_size; ++i)
	{
		if (i < old_size)
			new_ptr[i] = ptr[i];
		else
			new_ptr[i] = 0;
	}
	free(ptr);
	return (new_ptr);**/
	ptr = malloc(new_size);
	return (ptr);
}
