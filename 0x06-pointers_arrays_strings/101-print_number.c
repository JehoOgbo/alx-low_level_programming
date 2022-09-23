#include "main.h"

/**
 * print_number - function that prints numbers
 *
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int m, e, d, c, b;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
		m = n;
	d = m / 1000;
	c = m / 100;
	b = m / 10;
	if (e > 0)
	{
		_putchar((m / 10000) + '0');
		_putchar(((m / 1000) % 10) + '0');
		_putchar(((m / 100) % 10) + '0');
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (d > 0)		/* printing number if it is four digit */
	{
		_putchar(d + '0');
		_putchar(((m / 100) % 10) + '0');
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (c > 0)		/* print number if it is three digit */
	{
		_putchar(c + '0');
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (b > 0)		/* print number if it is two digit */
	{
		_putchar(b + '0');
		_putchar((m % 10) + '0');
	}
	else		/* print number if it is only one digit */
		_putchar(m + '0');
}
