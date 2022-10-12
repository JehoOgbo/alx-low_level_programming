#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @cmp: pointer to fuction to be used for comparison
 * @size: size of the array
 *
 * Return: index of the first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret_val;

	if (size <= 0)
		return (-1);
	i = 0;

	if (array && cmp)
		while (i < size)
		{
			ret_val = cmp(array[i]);
			if (ret_val)
				return (i);
			i++;
		}
	return (-1);
}
