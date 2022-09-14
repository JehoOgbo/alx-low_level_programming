#include <stdio.h>

/**
 * print_times_table - function
 *
 * @n: is an ascii character
 * prints times table from 0 to n if n < 15
 *
 * Return: void
 */
int main(void)
{
	int n = 5, rows, columns, product, huns, tens, unit;

	if ((n < 16) && (n > 0))
	{
		rows = 0;
		while (rows <= n)
		{
			columns = 0;
			while (columns <= n)
			{
				product = rows * columns;
				if (columns == 0)
					putchar('0');
				else if (product < 10)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((product / 10) + '0');
					putchar((product % 10) + '0');
				}
				else
				{
					putchar(',');
					putchar(' ');
					putchar((product / 100) + '0');
					putchar((product /10) % 10 + '0');
					putchar((product % 100) + '0');
				}
				columns++;
			}
			putchar('\n');
			rows++;
		}
	}
	return 0;
}
