#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable to be initialized
 * @name: name to be used for initializing
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;	/*general idea is to dereference pointer*/
	d->age = age;		/*alternative way to do this*/
	(*d).owner = owner;
}
