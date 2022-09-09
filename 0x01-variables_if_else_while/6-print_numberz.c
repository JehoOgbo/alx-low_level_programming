#include <stdio.h>

/**
 * main - Entry point
 *
 * program to print numbers 1 to 9 using only
 * putchar twice
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long int dig = 0;

	while (dig < 10)
	{
		putchar(dig + '0');
		dig++;
	}
	putchar('\n');
	return (0);
}
