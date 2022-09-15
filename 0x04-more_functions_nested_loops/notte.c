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
	char list, sec;

	for (num = 0; num < 10; num++)
	{
		list = 0;
		while (list < 15)
		{
			sec = list;
			if (list > 9)
			{
				sec = list % 10;
				_putchar('1');
			}
			putchar(sec + '0');
			list++;
		}
		_putchar('\n');
	}
}
