#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print the sum of
 * diagonals of a given square matrix
 *
 * @a: The given array name
 * @size: The size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, prev;
	unsigned int d, e;

	d = 0;
	e = 0;
	for (b = 0; b < (size * size); b++)
	{
		if (b == 0)
		{
			d += *(a + b);
			prev = b;
		}
		else if (b == (prev + size + 1))
		{
			d += *(a + b);
			prev = b;
		}
	}
	for (b = 0; b < size; b++)
	{
		e += *(a + (size * (b + 1) - (b + 1)));
	}
	printf("%d, %d\n", d, e);
}
