#include <stdio.h>

/**
 * main - Entry point
 *
 * this program will print the numbers of base16
 * in lowercase
 *
 * Return: always 0 if success
 */
int main(void)
{
	int dig = 0;
	char alp = 'a';

	while (dig < 10)
	{
		putchar(dig + '0');
		dig++;
	}
	while (alp < 'g')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
