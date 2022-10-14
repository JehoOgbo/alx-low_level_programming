#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * _putchar - prints a character
 * @c: input character
 *
 * Description: prints character using a more base function: write
 * Return: void
 */
void _putchar(char a)
{
	char *c;
	c = malloc(sizeof(char));
	c[0] = a;
	write(1, c, 1);
	free(c);
}
