#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 *
 * @str: string to be checked
 * Return: length of a string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; ++i)
		;
	return (i);
}

/**
 * string_nconcat - function to concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to which second string should be
 * copied to
 *
 * Return: pointer to new string null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	int len1, len2, i, sum;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	sum = len + n;
	nconcat = malloc(len + n + 1);
	if (nconcat == NULL)
		return (NULL);
	for (i = 0; i < sum; ++i)
	{
		if (i < len)
			nconcat[i] = s1[i];
		else if (i >= len)
			nconcat[i] = s2[i - len];
	}
	nconcat[i] = '\0';
	return (nconcat);
}
