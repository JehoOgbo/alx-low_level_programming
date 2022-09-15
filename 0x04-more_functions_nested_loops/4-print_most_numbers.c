#include "main.h"

/**
 * print_most_numbers
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	num = 0;
	for (num = 0; num < 10; num++)
	{
		if ((num != 2) && (num != 4))
			_putchar(num + '0');
	}
	_putchar('\n');
}
