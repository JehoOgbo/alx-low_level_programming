#include "main.h"

/**
 * factorial - find the factorial of a given number
 *
 * @n: given number
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
