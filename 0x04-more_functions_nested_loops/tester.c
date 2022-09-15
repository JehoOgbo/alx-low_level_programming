#include <stdio.h>

/**
 * print_triangle - function
 *
 * print triangle using '#'
 * @size: is a numeric operand
 *
 * Return: void
 */
int main(void)
{
	int spaces, lines, size, hash;

	size = 10;

	lines = 1;
	while (lines < size)
	{
		spaces = size - 1;
		while (spaces > lines)
		{
			putchar(' ');
			spaces--;
		}
		for (hash = 0; hash < lines; hash++)
			putchar('#');
		putchar('\n');
		lines++;
	}
}
