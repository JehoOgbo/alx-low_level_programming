#include "main.h"
#include <stdio.h>

/**
 * print_rev - function to reverse input string
 *
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int n;

	n = strlen(s) - 1;
	while (n >= 0)
	{
		putchar(s[n]);
		--n;
	}
	putchar('\n');
}
