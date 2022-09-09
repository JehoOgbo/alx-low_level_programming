#include <stdio.h>

/**
 * main - Entry point
 *
 * program to list all numelbers from 0 to 1
 *
 * Return: always 0 success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
