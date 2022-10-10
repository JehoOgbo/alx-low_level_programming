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
	int i, lname, lowner;

	dog = malloc(sizeof(dog_t));	/* allocate space for new entry */
	if (dog == NULL || !(name) || !(owner))	/*return null if malloc fails*/
	{				/* or if no name or owner is given */
		free(dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;
	for (lowner = 0; owner[lowner]; lowner++)
		;

	dog->name = malloc(lname + 1);	/* assign values to the struct */
	/*dog->age = age;*/
	dog->owner = malloc(lowner + 1);

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;
	for (i = 0; i < lowner; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
