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
	float sum, firnum, secnum;
	int counter;

	firnum = 0;
	secnum = 1;
	counter = 0;

	for (counter = 1; counter < 98; counter++)
	{
		sum = firnum + secnum;
		if (sum < 0)
			sum = sum * -1;
		printf("%.0f, ", sum);
		firnum = secnum;
		secnum = sum;
	}
	sum = firnum + secnum;
	if (sum < 0)
		sum = sum * -1;
	printf("%.0f\n", sum);
	return (0);
}
