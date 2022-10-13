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

	if (n)
	{
		va_start(num, n);

		for (i = 0; i < (n - 1); i++)
		{
			if (separator != NULL)
				printf("%d%s", va_arg(num, int), separator);
			else
				printf("%d", va_arg(num, int));
		}
		printf("%d\n", va_arg(num, int));

		va_end(num);
	}
}
