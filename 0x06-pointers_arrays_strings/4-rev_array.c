#include "main.h"

/**
 * reverse_array - reverses the order of an array of numbers
 *
 * @a: array of integers
 * @n: length of array a
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int b, d, e;
	int c[31000];

	b = 0;
	e = n - 1;
	while (e >= 0)
	{
		c[b] = a[e];
		++b;
		--e;
	}
	d = 0;
	while (d < n)
	{
		*(a + d) = *(c + d);
		++d;
	}
}
