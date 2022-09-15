#include <stdio.h>

/**
 * print_line - function
 *
 * @n: is an operand number
 * draw a straight line
 *
 * Return: void
 */
int main()
{
	int n = 2;
	int b;

	for (b = 0; b < n && n > 0; b++)
	{
		putchar('_');
	}
	return (0);
}
