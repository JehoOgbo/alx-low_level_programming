#include "main.h"
#include <stdio.h>

/**
 * divide - divides a number by another
 * @num: number to be divided
 * @div: number it is to be divided by
 *
 * Return: dividend
 */
int divide(unsigned long int num, unsigned int div)
{
	int dividend = 0;

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
 * print_binary - prints a decimal number in binary
 *
 * @n: decimal number to be converted and printed
 * Description: You're not allowed to use arrays, malloc, % or /
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, count;

	count = find_no_digit(n);
	for (i = count; i >= 0; i--)
	{
		if (n & (1 << i))
			putchar('1');
		else
			putchar('0');
	}
}
