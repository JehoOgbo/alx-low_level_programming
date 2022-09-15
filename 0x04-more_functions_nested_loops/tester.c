#include <stdio.h>

/**
 * more_numbers - function
 *
 * prints numbers 1 to 14 10 times
 *
 * Return: void
 */
int main(void)
{
	int num, list, firs, sec;

	for (num = 0; num < 10; num++)
	{
		for(list = 0; list < 15; list++)
		{
			if (list < 10)
				putchar(list + '0');
			else
			{
				firs = 1;
				sec = list % 10;
				putchar(firs + '0');
				putchar(sec + '0');
			}
		}
		putchar('\n');
	}
	return (0);
}
