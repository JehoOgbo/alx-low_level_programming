#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - finds the sum of variable number of integers
 * @n: number of integers to be entered into varible part
 *
 * Return: sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);

		va_end(ap);
	}
	return (sum);
}
