#include "main.h"

/**
 * free_grid - frees a two-dimensional array
 *
 * @grid: two dimensional array to be freed
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	free(grid);
}
