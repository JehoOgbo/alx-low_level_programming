#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0, int_size;

	if (array && action)	/* only use if there's an array and function*/
	{
		int_size = size;
		/* perform action on each element */
		while (i < int_size)
			action(array[i++]);
	}
}
