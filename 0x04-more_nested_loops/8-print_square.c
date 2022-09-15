#include "main.h"

/**
 * print_square - function
 *
 * @size: is an operand number
 *
 * Return: void
 */
void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		row = 0;
		while (row < size)
		{
			column = 0;
			while (column < size)
			{
				_putchar('#');
				++column;
			}
			_putchar('\n');
			++row;
		}
	}
	else
		_putchar('\n');
}
