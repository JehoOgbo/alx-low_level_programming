#include <stdio.h>

/**
 * main - Entry point
 *
 * this program prints the alphabet in lowercase
 * without e and q
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
