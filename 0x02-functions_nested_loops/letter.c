#include <stdio.h>

/**
 * jack_bauer - function
 *
 * prints every minute of the day.
 *
 * Return: void
 */
int main(void)
{
	int a, b, c, d, max;

	max = 10;
	a = 0;
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
					putchar(a + '0');
					putchar(b + '0');
					putchar(':');
					putchar(c + '0');
					putchar(d + '0');
					putchar('\t');
					++d;
				}
				++c;
			}
			++b;
		}
		++a;
	}
	return (0);
}
