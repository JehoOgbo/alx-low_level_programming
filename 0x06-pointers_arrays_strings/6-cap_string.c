#include "main.h"
#include <string.h>

/**
 * cap_string - capitalize all words in a string
 *
 * @c: input string
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	int num;
	int prev;
	int len;

	len = strlen(c);
	for (num = 0; num < len; num++)
	{
		prev = num - 1;
		if (c[num] >= 'a' && c[num] <= 'z')
		{
			if (num == 0)
				c[num] = c[num] - 32;
			else if (c[prev] == 9 || c[prev] == 10 || c[prev] == 32)
				c[num] = c[num] - 32;
			else if (c[prev] == 33 || c[prev] == 34 || c[prev] == 40)
				c[num] = c[num] - 32;
			else if (c[prev] == 41 || c[prev] == 44 || c[prev] == 46)
				c[num] = c[num] - 32;
			else if (c[prev] == 59 || c[prev] == 63 || c[prev] == 123)
				c[num] = c[num] - 32;
			else if (c[prev] == 125)
				c[num] = c[num] - 32;
		}
	}
	return (c);
}
