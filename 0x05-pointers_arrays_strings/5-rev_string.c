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
	int a;
	char str[1000];

	a = 0;
	n = strlen(s) - 1;
	while (n >= 0)
	{
		str[a] = s[n];
		--n;
		++a;
	}
	*s = *str;
}
