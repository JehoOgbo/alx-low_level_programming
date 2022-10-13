#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print variable number of strings
 * @separator: string to separate entries in output
 * @n: amount of strings to printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *store;

	if (n)
	{
		va_start(str, n);
		for (i = 0; i < (n - 1); i++)
		{
			store = va_arg(str, char *);
			if (va_arg(str, char *) == NULL)
				store = "(nil)";
			if (separator)
				printf("%s%s", store, separator);
			else
				printf("%s", store);
		}
		store = va_arg(str, char *);
		printf("%s\n", store);
	}
}
