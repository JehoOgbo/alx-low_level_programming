#include "main.h"

/**
 * times_table - function
 *
 * description: prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int rows, columns, product, tens, num;

	while (rows <= 9)
	{
		while (columns <= 9)
		{
			product = rows * columns;
			tens = product / 10;
			num = product % 10;

			if (columns == 0)
				_putchar(product + '0');
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(num + '0');
			}
			++columns;
		}
		_putchar('\n');
		++rows;
	}
}
