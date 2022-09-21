#include "main.h"

/**
 * _strncpy - copies one string to another until a certain point
 *
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: limit to which string should be copied
 *
 * Return: 0
 */
char _strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] = '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
