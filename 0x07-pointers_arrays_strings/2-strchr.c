#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: input string
 * @c: character to be found
 *
 * Return: pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	char *d;

	d = strchr(s, c);
	return (d);
}
