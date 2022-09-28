#include "main.h"

/**
 * check_prime - checks if an integer is prime
 * @n: number to be checked
 * @c: number used for check
 *
 * Return: 1 or 0
 */

int check_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + check_prime(n, c + 1));
}

/**
 * is_prime_number - checks if an integer is prime
 *
 * @n: number to be checked
 * Return: 1 if prime else return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, 2));
}
