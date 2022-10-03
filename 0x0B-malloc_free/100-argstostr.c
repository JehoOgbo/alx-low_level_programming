#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	ptr = malloc(ac * 2 * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < ac)
		{
			if (j % 2 == 0)
			{
				ptr[j] = ptr[i];
				++j;
			}
			if (j % 2 == 1)
			{
				ptr[j] = '\n';
				++j;
			}
			++i;
		}
		ptr[j] = '\0';
	}
		return (ptr);
}

