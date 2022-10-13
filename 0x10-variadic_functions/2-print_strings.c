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

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		store = va_arg(str, char *);

		if (store == NULL)
			printf("(nil)");
		else
			printf("%s", store);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
}
