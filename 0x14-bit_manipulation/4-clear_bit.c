#include "main.h"

/**
 * divide - divides a number by another
 * @num: number to be divided
 * @div: divisor
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
 * Description: this function takes a decimal number and finds how
 * many digits will be in it's binary equivalent.
 *
 * Return: number of digits
 */
unsigned int find_no_digit(unsigned long int num)
{
	unsigned long int count = 0;

	while (num >= 2)
	{
		num = divide(num, 2);
		count++;
	}

	return (count);
}

/**
 * clear_bit - clears the value of a bit at a given index
 * @n: number whose bit is to be cleared
 * @index: index of the bit to be cleared
 *
 * Return: value of bit at index or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int check_index;

	check_index = find_no_digit(*n);
	if (index > check_index)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
