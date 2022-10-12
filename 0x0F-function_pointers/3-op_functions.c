#include "3-calc.h"
#include <stddef.h>

/**
 * op_add - find the sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - find the difference between two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - find the product of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - find the dividend of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: dividend
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder of diision of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
