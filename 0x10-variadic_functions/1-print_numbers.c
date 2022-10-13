#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/*#include <stddef.h>*/

/**
 * print_numbers - print variable amount of numbers
 * @separator: string serving as separator
 * @n: amount of numbers to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(num);
}
