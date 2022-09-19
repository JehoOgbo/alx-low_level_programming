#include "main.h"

/**
 * print_rev - function to reverse input string
 *
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	n = strlen(s) - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		--n;
	}
	_putchar('\n');
}
