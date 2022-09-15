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

	for (b = 0; b < n; b++)
	{
		if (b > 0)
		{
			putchar('_');
		}
	}
}
