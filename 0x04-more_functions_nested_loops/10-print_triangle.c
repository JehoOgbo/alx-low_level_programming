#include "main.h"

/**
 * print_triangle - function
 *
 * print triangle using '#'
 * @size: is a numeric operand
 *
 * Return: void
 */
void print_triangle(int size)
{
	int spaces, lines, hash;

	lines = 1;
	while (lines < size)
	{
		spaces = size - 1;
		while (spaces > lines)
		{
			_putchar(' ');
			spaces--;
		}
		for (hash = 0; hash < lines; hash++)
			_putchar('#');
		_putchar('\n');
		lines++;
	}
}
