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
	int rows, columns, product, huns, tens, unit;

	if ((n < 16) && (n > 0))
	{
		rows = 0;
		while (rows <= n)
		{
			columns = 0;
			while (columns <= n)
			{
				product = rows * columns;
				huns = product / 100;
				tens = product / 10;
				unit = product % 10;
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
				else if (product > 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(unit + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(huns + '0');
					_putchar(tens + '0');
					_putchar(unit + '0');
				}
				columns++;
			}
			rows++;
		}
	}
}

