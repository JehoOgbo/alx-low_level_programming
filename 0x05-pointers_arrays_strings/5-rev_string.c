#include "main.h"
#include <string.h>

/**
 * rev_string - function to reverse a string
 *
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int n;
	int a, c, stlen;
	char b;
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
	stlen = strlen(s);
	while (c < stlen)
	{
		*(s + c) = *(str + c);
		c++;
	}
}
