#include "main.h"

/**
 * print_numbers - funtion
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		_putchar(num + '0');
		++num;
	}
	_putchar('\n');
}
