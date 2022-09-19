#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints 2nd half of a string
 *
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
	int n;
	int a;

	a = strlen(str);
	if (a % 2 == 0)
	{
		n = a / 2;
		while (n < a)
		{
			putchar(str[n]);
			++n;
		}
		putchar('\n');
	}
	else
	{
		n = (a + 1) / 2;
		while (n < a)
		{
			putchar(str[n]);
			++n;
		}
		putchar('\n');
	}
}
