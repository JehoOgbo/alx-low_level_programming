#include <stdio.h>

/**
 * main - Entry point
 *
 * this program prints the alphabets in reversr using only putchar
 *
 * Return: always 0 if success
 */
int main(void)
{
	char lapa = 'z';

	while (lapa >= 'a')
	{
		putchar(lapa);
		lapa--;
	}
	putchar('\n');
	return (0);
}
