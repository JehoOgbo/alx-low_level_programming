#include "main.h"

/**
 * _memset - function to fill the first n bytes of
 * memory area pointed to by s with constant byte b
 *
 * @s: dereferenced pointer to a character
 * @b: constant byte character
 * @n: number of bytes of memory to be filled
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
