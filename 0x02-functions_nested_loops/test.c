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
	int a, b, c, d;

	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 4)
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
					++d;
				}
				++c;
			}
			++b;
		}
		++a;
		putchar('\n');
	}
	return (0);
}
