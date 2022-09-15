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
	int num, list, firs, sec;

	for (num = 0; num < 10; num++)
	{
		list = 0;
		while (list < 15)
		{
			if (list < 10)
				_putchar(list + '0');
			else
			{
				firs = 1;
				sec = list % 10;
				_putchar(firs + '0');
				_putchar(sec + '0');
			}
			list++;
		}
		_putchar('\n');
	}
}
