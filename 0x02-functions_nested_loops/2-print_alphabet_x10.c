#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Description: prints the alphabets in
 * lower case 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int num;
	char letter;

	num = 0;
	while (num < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			++letter;
		}
		_putchar('\n');
		++num;
	}
}
