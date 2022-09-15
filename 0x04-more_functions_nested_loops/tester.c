#include <stdio.h>

/**
 * print_numbers - funtion
 *
 * Return: void
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		++num;
	}
	putchar('\n');
}
