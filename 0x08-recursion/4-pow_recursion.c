#include "main.h"

/**
 * _pow_recursion - finds the value of a number
 * x raised to the power of another number y
 *
 * @x: number which is to be raised to a power
 * @y: power to which x should be raised
 *
 * Return: the result of the indices
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}	
