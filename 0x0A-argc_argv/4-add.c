#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - function to check if string is composed of integers
 *
 * @s: string to be checked
 * Return: 1 if integers, 0 otherwise
 */
int isInteger(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - program to calculate the sum of command
 * line integer input
 *
 * @argc: command line argument count
 * @argv: argument vector
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		/* evaluates to true if non-digit is contained */
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
		/* calculates the sum of the arguments */
	}
	printf("%i\n", sum);	/* prints the sum of the arguments */

	return (0);
}
