#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print the product of
 * two command line arguments.
 *
 * @argc: command line argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		puts("Error");
		return (1);
	}
}
