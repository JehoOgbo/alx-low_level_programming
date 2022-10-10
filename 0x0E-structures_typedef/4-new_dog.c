#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: Stores a copy of name and owner
 * and returns NULL if the function fails
 * Return: pointer to struct to type
 * dog_t; an alias to a struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;	/* creates a pointer for the entry of the new dog */

	dog = malloc(sizeof(dog_t));	/* allocate space for new entry */
	if (dog == NULL)
		return (NULL);
	dog->name = name;	/* assign values to the struct */
	(*dog).age = age;
	dog->owner = owner;

	return (dog);
}
