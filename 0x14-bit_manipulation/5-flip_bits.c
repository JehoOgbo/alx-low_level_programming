#include "main.h"
#include <stdio.h>

#define GREATER(x, y) ((x > y) ? x : y)

/**
 * divide - divides a number by another
 * @num: number to be divided
 * @div: number it is to be divided by
 *
 * Return: dividend
 */
int divide(unsigned long int num, unsigned int div)
{
	unsigned long int dividend = 0;

	while (num >= div)
	{
		num -= div;
		dividend++;
	}
	return (dividend);
}

/**
 * find_no_digit - finds the number of digits in a binary number
 * @num: decimal number to be converted and checked
 *
 * Return: number of digits
 */
unsigned int find_no_digit(unsigned long int num)
{
	unsigned int count = 0;

	while (num >= 2)
	{
		num = divide(num, 2);	/* divide without using / operator */
		count++;
	}

	return (count);
}

/**
 * flip_bits - finds the number of bits that need to be flipped
 * to get a number from another
 *
 * @n: first decimal number to be used for checking
 * @m: the other decimal number to be used for checking
 * Description: You're not allowed to use arrays, malloc, % or /
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, index = 0;
	int i;

	count = find_no_digit(GREATER((n), (m)));
	for (i = count; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			if ((m & (1 << i)) == 0)
				index++;
		}
		else
		{
			if (m & (1 << i))
				index++;
		}
	}
	return (index);
}
