#include "main.h"

/**
 * print_alphabet - function, Entry point
 *
 * This program prints the alphabets
 * from a - z.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		++letter;
	}
	_putchar('\n');
}
