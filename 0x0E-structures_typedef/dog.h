#ifndef DOG_H
#define DOG_H

/**
 * struct dog - informs users about dogs in the area
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: The struct gives information about a dog
 * by giving the dog's name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* undefine NULL in order to define it again */
/*#undef NULL*/
/* define NULL keyword to be (nil) when printed as string */
/*#define NULL (void *)"(nil)"*/
/* function prototype for function that initializes struct */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* function prototype for function that prints the information in the struct */
void print_dog(struct dog *d);
/*create an alias data type for struct dog*/
typedef struct dog dog_t;
/* function prototype for function that creates new dog */
dog_t *new_dog(char *name, float age, char *owner);
/* function prototype for function that frees memory allocated to dog_t */
void free_dog(dog_t *d);

#endif /*DOG_H*/
