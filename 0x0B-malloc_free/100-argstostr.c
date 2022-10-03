#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	int i, j, len = 0, newline = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, len++)
		len += strlen(av[i]);

	ptr = malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j] != 0; j++, newline++)
			ptr[newline] = av[i][j];
		ptr[newline] = '\n';
		i++;
		newline++;
	}
	ptr[newline] = '\0';
	return (ptr);
}

