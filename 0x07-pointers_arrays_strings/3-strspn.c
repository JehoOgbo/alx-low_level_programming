#include "main.h"
#include <string.h>

/**
 * _strspn - returns the number of bytes in the initial segment of s
 * which consists only of bytes from accept
 *
 * @s: input string
 * @accept: bytes from which return value is gotten
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;

	a = strspn(s, accept);
	return (a);
}
