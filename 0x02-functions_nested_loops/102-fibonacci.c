#include <stdio.h>

/**
 * main - Entry point
 *
 * print the first 50 fibonacci numbers
 *
 * Return: 0 success
 */
int main(void)
{
	long int sum, firnum, secnum;
	int counter;

	firnum = 0;
	secnum = 1;
	counter = 0;

	for (counter = 1; counter < 51; counter++)
	{
		sum = firnum + secnum;
		printf("%ld, ", sum);
		firnum = secnum;
		secnum = sum;
	}
	sum = firnum + secnum;
	printf("%ld\n", sum);
	return (0);
}
