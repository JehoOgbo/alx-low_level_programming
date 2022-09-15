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

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num < 15; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
