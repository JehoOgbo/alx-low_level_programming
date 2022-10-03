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

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*ptr = s1;*/
	i = 0;
	while ( i <= len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		ptr[i] = s2[j];
		++j;
		++i;
	}

	ptr[i] = '\0';
	return (ptr);
}
