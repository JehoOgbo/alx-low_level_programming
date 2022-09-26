#include "main.h"
#include <string.h>

/**
 * _strpbrk - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 *
 * @s: string being searched
 * @accept: bytes being searched for
 *
 * Return: a pointer to the byte in s matchin a byte
 * in accept or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *c;

	c = strpbrk(s, accept);
	return (c);
}
