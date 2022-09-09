#include <stdio.h>

/**
 * main - Entry point
 *
 * program to print all possible combinations of two digit numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int tens = 0;
	int units;

	while (tens < 10)
	{	
		units = tens + 1;
		while (units < 10)
		{
			putchar(tens + '0');
			putchar(units + '0');

			if ((tens != 8) || (units != 9))
			{
				putchar(',');
				putchar(' ');
			}
			units++;
		}
		tens++;
	}
	putchar('\n');
	return (0);
}

