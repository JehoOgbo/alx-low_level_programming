#include "main.h"

/**
 * more_numbers - function
 *
 * prints numbers 1 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int num;
	int count;

	num = 0;
	count = 0;
	while (count < 10)
	{
		while (num < 15)
		{
			_putchar(num);
			++num;
		}
		_putchar('\n');
		++count;
	}
}
