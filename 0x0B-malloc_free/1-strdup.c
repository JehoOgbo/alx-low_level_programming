#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the inputted string
 * Malloc is used for memory allocation and
 * that can be freed with free
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0, b;

	b = strlen(str);
	ptr = malloc((b + 1) * sizeof(char));
	if (ptr == NULL || str == NULL)
		return (NULL);
	while (i <= b)
	{
		ptr[i] = str[i];
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}
