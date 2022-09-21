#include "main.h"
#include <string.h>

/**
 * string_toupper - converts lowercase to uooercase
 *
 * @c: input string
 * Return: converted string
 */
char *string_toupper(char *c)
{
	int a, f, g;
	char b, e;
	char str[100000];


	g = strlen(c);
	a = 0;
	while (a < g)
	{
		e = c[a];
		if (e >= 'a' && e <= 'z')
			b = e - 32;
		else
			b = e;
		str[a] = b;
		a++;
	}
	f = 0;
	while (f < g)
	{
		*(c + f) = *(str + f);
		f++;
	}
	return (c);
}
