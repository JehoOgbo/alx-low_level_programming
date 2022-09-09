#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * this program prints the last digit of a
 * random number and whether it is greater
 * than five, less than six or is zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
	{
		char str[] = "and is greater than 5";

		printf("Last digit of %d is %d %s\n", n, n % 10, str);
	}
	else if ((n % 10) == 0)
	{
		char str[] = "and is 0";

		printf("Last digit of %d is %d %s\n", n, n % 10, str);
	}
	else
	{
		char str[] = "and is less than 6 and not 0";

		printf("Last digit of %d is %d %s\n", n, n % 10, str);
	}
	return (0);
}
