#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n an array of integers followed by a new line
 *
 * @a: input array of integers
 * @n: number of elements of a to be outputted
 * Return: void
 */
void print_array(int *a, int n)
{
	int num;

	num = 0;
	while (num < n)
	{
		if (num == n - 1)
			printf("%d", a[num]);
		else
			printf("%d, ", a[num]);
	}
}
