#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of
 * integers from min to max
 *
 * @min: first value
 * @max: last value
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *int_arr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	int_arr = malloc(len * sizeof(*int_arr));
	if (int_arr == NULL)
		return (NULL);
	for (i = 0; i < len; ++i)
	{
		int_arr[i] = min;
		min++;
	}
	return (int_arr);
}
