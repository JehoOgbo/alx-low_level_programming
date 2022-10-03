#include "main.h"
#include <stdlib.h>

/**
 * count_word - count the number of words
 * in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int i, w = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			w++;
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to be splitted
 *
 * Return: NULL or pointer to array of strings
 */

char **strtow(char *str)
{
	char **ptr, *tmp;
	int i, len = 0, words, c = 0, k = 0, start, end;

	if (str == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				ptr[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	ptr[k] = NULL;
	return (ptr);
}
