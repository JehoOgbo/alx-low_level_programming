#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * only_digit - checks if a string is composed of only numbers
 *
 * @s: input string to be checked
 * Return: 0 or 1
 */
int only_digit(char *s)
{
	int firstnum = 0;

	if (s[firstnum] == '-')
		firstnum = 1;
	while (s[firstnum])
	{
		if (isdigit(s[firstnum]) == 0)
			return (0);
		firstnum++;
	}
	return (1);
}

/**
 * reverse - reverse a string in place
 *
 * @s: string to be reversed
 * Return: void
 */
void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
 * itoa - converts an  integer/number to an alphabet
 *
 * @n: number to be converted
 * @str: string array which alphabets are to be stored
 * Return: void
 */
char *itoa(long int n, char str[])
{
	int i, sign = n;

	/*if ((sign = n) < 0)	 record sign */
		n = -n;		/* make n positive */
	i = 0;
	do {	/* generate digits in reverse order */
		str[i++] = n % 10 + '0';/* get next digit */
	} while ((n /= 10) > 0);	/* delete it */
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
	reverse(str);
	return (str);
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
	/*char fstr[] = "Error";*/
	int b, c;
	double product, d, e;

	if (argc != 3)
	{
		/*for (i = 0; i < a; ++i)*/
			/*_putchar(fstr[i]);*/
		/*_putchar('\n');*/
		printf("Error\n");
		exit(98);
	}
	b = only_digit(argv[1]);
	c = only_digit(argv[2]);
	if (b == 0 || c == 0)
	{
		/*for (i = 0; i < a; ++i)*/
			/*_putchar(fstr[i]);*/
		/*_putchar('\n');*/
		printf("Error\n");
		exit(98);
	}
	else if (b && c)
	{
		d = atof(argv[1]);
		e = atof(argv[2]);
	}
	product = d * e;
	printf("%.0f\n", product);
	return (0);
}
