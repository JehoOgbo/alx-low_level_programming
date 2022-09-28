#include "main.h"

/**
 * sqrt_evaluate - checks if a number is a perfect square
 * @i: number used for checking
 * @n: number to be checked:
 *
 * Return: number if square root
 */

int sqrt_evaluate(int i, int n)
{
	if (i * i == n)	/* condition base */
		return (i);
	else if (i * i > n)	/* return -1 since n is not a perfect square */
		return (-1);
	return (0 + sqrt_evaluate(i + 1, n);
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 *
 * @n: number whose square root is to be found
 * Return: square root, or -1
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 2;
	if (n < 0)	/* Return value if n is negative */
		return (-1);
	else if (n == 0 || n == 1)	/* base case n is 1 or 0 */
		return (n);
	else	/* Recursive call to find the square root */
		return (sqrt_evaluate(i, n));
}
