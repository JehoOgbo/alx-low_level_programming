#include "main.h"

/**
 * print_last_digit - function
 *
 * @n: is an ascii character
 * prints the last didit of a number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	_putchar(m);
	return (m);
}
