#include "main.h"
#include <stdio.h>

/**
 * main - function to fint the length of a string
 *
 * @s: is an ascii character
 * Return: 0
 */
int main()
{
	int a;
	int n = 0;
	char s[] = "tree";

	a = 0;
	while (s != '\0')
	{
		s[n]++;
		++a;
	}
	printf("%d", a);

	return (0);
}
