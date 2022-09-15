#include "main.h"

/**
 * print_diagonal - function
 *
 * @n: operand number
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line, spaces;

	if (n > 0)
	{
		line = 0;
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
		_putchar('\n');
}

