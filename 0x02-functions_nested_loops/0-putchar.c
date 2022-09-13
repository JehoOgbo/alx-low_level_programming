#include "main.h"

/**
 * main - entry point
 *
 * This program shall print the word
 * _putchar without the use of the
 * standard libraries.
 *
 * Return: Always 0 success
 */
int main(void)
{
	char word[] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(word[n]);
		++n;
	}
	_putchar('\n');

	return (0);
}
