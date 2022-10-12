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
	int a, b, d, e, p;
	/*int (*p)(int a, int b);*/
	char *check;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d, %d\n", a, b);

	check = strdup(argv[2]);
	printf("%s\n", check);

	d = strcmp(check, "/");
	e = strcmp(check, "%");
	printf("%d, %d\n", d, e);
	if ((d == 0 || e == 0) && b == 0)
	{
		puts("Error");
		exit(100);
	}
	p = (*get_op_func(argv[2]))(a, b);
	printf("%d", p);
	/**c = p(a, b);
	printf("%d\n", c);*/
	return (0);
}
