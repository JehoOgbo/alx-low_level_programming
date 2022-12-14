#include "main.h"

/**
 * print_times_table - function
 *
 * @n: is an ascii character
 * prints times table from 0 to n if n < 15
 *
 * Return: void
 */
void print_times_table(int n)
{
	int rows, columns, product;

	if ((n < 16) && (n >= 0))
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (columns = 0; columns <= n; columns++)
			{
				product = rows * columns;
				if (columns == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
