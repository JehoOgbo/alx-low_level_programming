#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - fuction to free memory allocated using malloc
 * @d: data contained in struct dog_t
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);	/* use pointer that points to allocated space */
}
