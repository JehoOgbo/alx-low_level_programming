#include "main.h"

/**
 * print_line - function
 *
 * @n: is an operand number
 * draw a straight line
 *
 * Return: void
 */
void print_line(int n)
{
	int b;
	
	b = 0;
	while (b <= n)
	{
		if (b > 0)
		{
			putchar('_');
			b++;
		}
	}
}
