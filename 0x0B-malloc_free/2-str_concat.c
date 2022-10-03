#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string inputted
 * @s2: second input string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, len, i, j;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	ptr = malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	return (ptr);
}
