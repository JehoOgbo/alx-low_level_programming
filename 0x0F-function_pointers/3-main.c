#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to perform a simple operation using two numbers
 * @argc: command line argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int a, b, d, e, f, g, h;
	int (*opp)(int, int);
	char *check;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	check = strdup(argv[2]);

	d = strcmp(check, "/");
	e = strcmp(check, "%");
	f = strcmp(check, "+");
	g = strcmp(check, "-");
	h = strcmp(check, "*");
	if (!(d == 0 || e == 0 || f == 0 || g == 0 || h == 0))
	{
		puts("Error");
		exit(99);
	}

	if ((d == 0 || e == 0) && b == 0)
	{
		puts("Error");
		exit(100);
	}
	opp = get_op_func(argv[2]);
	printf("%d\n", opp(a, b));
	return (0);
}
