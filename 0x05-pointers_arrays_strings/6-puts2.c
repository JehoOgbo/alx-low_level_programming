#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function to print every other character of a string and newline
 * @str: input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int n;

	n = 0;
	while (n < strlen(str))
	{
		if ( n % 2 = 0)
			putchar(str[n]);
	}
	putchar('\n');
}
