#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of memory to be allocated
 * Return: a pointer to allocated memory or 98 if failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL || ptr == 0)
		exit(98);
	return (ptr);
}
