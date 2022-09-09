#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 success
 */
int main(void)
{
	int n = 48;
	int a = 0;
	int b;
	int come = 44;

	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + n);
			putchar((a % 10) + n);
			putchar(32);
			putchar((b / 10) + n);
			putchar((b % 10) + n);
			if (a != 98 || b != 99)
			{
				putchar(come);
				putchar(32);
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
