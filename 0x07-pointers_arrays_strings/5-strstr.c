#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurrence of the substring in a
 * string. The terminating null bytes are not compared.
 *
 * @haystack: the string being searched.
 * @needle: the substring being searched for.
 *
 * Return: pointer to beginning of located
 * string or null if the string is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *c;

	c = strstr(haystack, needle);
	return (c);
}
