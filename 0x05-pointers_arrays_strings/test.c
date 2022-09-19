#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - function to reverse a string
 *
 * @s: input string
 * Return: void
 */
int main(void)
{
	int n;
	int a;
	int c;
	int d;
	char b;
	char s[] = "Today is monday";
	char str[1000];

	a = 0;
	n = strlen(s) - 1;
	while (n >= 0)
	{
		b = s[n];
		str[a] = b;
		--n;
		++a;
	}
	c = 0;
	d = strlen(s);
	while (c < d)
	{
		*(s + c) = *(str + c);
		c++;
	}
	printf("%c, %c, %c", s[0], s[6], s[7]);
	return (0);
}
