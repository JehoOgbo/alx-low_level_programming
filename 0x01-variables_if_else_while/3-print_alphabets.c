#include <stdio.h>

/**
 * main - Entry point
 *
 * this program uses putchar to output
 * the alphabets in lowercase and uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
