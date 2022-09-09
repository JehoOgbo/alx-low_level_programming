#include <stdio.h>

/**
 * main - Entry point
 *
 * this will print numbers 1 to 9 separated by, and space
 *
 * Return: always 0 if success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
