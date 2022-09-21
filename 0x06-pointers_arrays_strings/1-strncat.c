#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings until size limit
 *
 * @dest: first string
 * @src: stringbto be concatenated
 * @n: operand number
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++;)
		dest[len + 1] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
