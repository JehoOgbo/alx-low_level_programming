#include "main.h"

/**
 * _abs - function
 *
 * @n: is an ascii character
 * description: prints the absolute values of numbers
 *
 * Return: 0;
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
