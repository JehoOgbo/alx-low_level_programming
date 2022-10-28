#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * pow - function that raises a number to a power
 * @num: number to be raised to the power
 * @ntim: number of times it is to be raise
 *
 * Return: the result of multiplication
 */
unsigned int power(unsigned int num, unsigned int ntim)
{
	if (ntim == 0)
		return (1);
	return (num * power(num, ntim - 1));
}

/**
 * binary_to_unit - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0's and 1's.
 * Return: converted number of 0 if there is one or more chars
 * in the string that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	char *c;
	unsigned int size, i = 0, a, sum = 0;

	if (b == NULL)	/* return 0 if b is empty */
		return (0);
	c = strdup(b);	/* copy the string */
	while (c[i])
	{
		if (c[i] != '0' && c[i] != '1')
			return (0);	/* return 0 if other chars present */
		i++;
	}
	for (size = 0; c[size]; size++)
		;
	size--;
	i = 0;
	while (c[i])
	{
		if (c[i] == '1')
			a = 1;
		else
			a = 0;
		sum += a * power(2, (size - i));
		i++;
	}

	return (sum);
}
