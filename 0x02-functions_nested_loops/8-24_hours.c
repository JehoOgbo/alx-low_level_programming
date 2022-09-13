#include "main.h"

/**
 * jack_bauer - function
 *
 * prints every minute of the day.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, max;

	a = 0;
	max = 10;
	while (a < 3)
	{
		if (a == 2)
			max = 4;
		b = 0;
		while (b < max)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					++d;
				}
				++c;
			}
			++b;
		}
		++a;
	}
}
