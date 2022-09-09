#include<stdio.h>

/**
 * main - Entry point
 *
 * this program will print the alphabets using putchar
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char space = '\n';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar(space);
	return (0);
}
