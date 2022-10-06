#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * only_digit - checks if a string is composed of only numbers
 *
 * @str: input string to be checked
 * Return: 0 or 1
 */
int only_digit(char *s)
{
	while (*s)
	{
		if (isdigit(*s++) == 0)
			return 0;
	}
	return (1);
}
/**
 * main - program to multiply two integers
 * entered as command line arguments
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 * exit with a status of 98 if failure
 */
int main(int argc, char **argv)
{
	char fstr[] = "Error";
	int i, a = strlen(fstr), b, c;
	int product, d, e;

	if (argc != 3)
	{
		for (i = 0; i < a; ++i)
			_putchar(fstr[i]);
		exit(98);
	}
	b = only_digit(argv[1]);
	c = only_digit(argv[2]);
	if (b && c)
	{
		d = atoi(argv[1]);
		e = atoi(argv[2]);
	}
	product = d * e;
	printf("%d\n", product);
	return (0);
}
