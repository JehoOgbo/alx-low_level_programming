#include "main.h"

/**
 * swap_int - function to swap the value of two integers
 *
 * @a: is the first integer
 * @b: is the 2nd integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
