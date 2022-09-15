#include "main.h"

/**
 * _isupper - function
 *
 * @c: is an operand number
 *
 * checks if a character is uppercase
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' and c <= 'Z')
		return (1);
	else
		return (0);
}
