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
	long int sum, firnum, secnum, total_sum;

	firnum = 0;
	secnum = 1;

	while (sum <= 4000000)
	{
		sum = firnum + secnum;
		if (sum % 2 == 0)
			total_sum += sum;
		firnum = secnum;
		secnum = sum;
	}
	printf("%ld\n", total_sum);
	return (0);
}
