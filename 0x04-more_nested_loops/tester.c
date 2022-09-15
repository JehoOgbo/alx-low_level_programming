#include <stdio.h>

/**
 * print_diagonal - function
 *
 * @n: operand number
 *
 * Return: void
 */
int main(void)
{
	int n, line, spaces;

	n = 8;
	if (n > 0)
	{
		line = 0;
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
			line++;
		}
	}
	else
		putchar('\n');
	return (0);
}

