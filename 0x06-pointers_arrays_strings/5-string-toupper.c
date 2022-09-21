#include "main.h"

/**
 * string_toupper - converts lowercase to uooercase
 *
 * @c: input string
 * Return: converted string
 */
char string_toupper(char *c)
{
	int a;
	char b, e;
	char str[100000];

	a = 0;
	while (a != '\0')
	{
		e = c[a];
		if (e >= 'a' && e <= 'z')
			b = e - 32;
		else
			b = e;
		str[a] = b;
		a++;
	}
	while (f != '\0')
	{
		*(c + f) = *(str + f);
		f++;
	}
	return (str);
}
