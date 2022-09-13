#include "main.h"

/**
 * print_to_98 - function
 *
 * @n: is an ascii character
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		++n;
	}
	while (n > 98)
	{
		_putchar(n + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		--n;
	}
}
