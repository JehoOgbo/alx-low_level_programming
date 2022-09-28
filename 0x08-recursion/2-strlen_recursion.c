#include "main.h"

/**
 * is_char - returns 1 for character input
 * @c: ascii character
 * Return: 1
 */
int is_char(void)
{
	return (1);
}

/**
 * _strlen_recursion - calculates the length of a string
 *
 * @s: inputted string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (is_char(s[0]) + _strlen_recursion(s + 1));
}
