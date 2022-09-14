#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the sum of all multiples of
 * 3 and 5 that are less than 1024
 *
 * Return: always 0
 */
int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
