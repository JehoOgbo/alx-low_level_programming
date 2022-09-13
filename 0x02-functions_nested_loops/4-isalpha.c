#include "main.h"

/**
 * _isalpha - function
 *
 * @c: c is an ascii character
 * description: checks for alphabetic character.
 *
 * Return: 1 if alphabetic and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
