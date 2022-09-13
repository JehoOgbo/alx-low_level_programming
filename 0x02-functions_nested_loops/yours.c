#include <stdio.h>

/**
 * times_table - function
 *
 * description: prints the 9 times table
 *
 * Return: void
 */
int main(void)
{
	int rows, columns, product, tens, num;

	rows = 0;
	while (rows <= 9)
	{
		columns	 = 0;
		while (columns <= 9)
		{
			product = rows * columns;
			tens = product / 10;
			num = product % 10;

			if (columns == 0)
				putchar('0');
			else if (product < 10)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(product + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(tens + '0');
				putchar(num + '0');
			}
			++columns;
		}
		putchar('\n');
		++rows;
	}
	return (0);
}
