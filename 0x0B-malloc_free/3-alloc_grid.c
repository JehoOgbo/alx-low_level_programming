#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a
 * two dimensional array of integers
 *
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: a pointer to the array formed
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(width * height * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
