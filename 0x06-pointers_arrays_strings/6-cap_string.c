#include "main.h"

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

	for (num = 0; num != '\0'; num++)
	{
		prev = num - 1;
		if (c[num] >= 'a' && c[num] <= 'z')
		{
			if (num == 0)
				s[num] = s[num] - 32;
			else if (c[prev] == 9 || c[prev] == 10 || c[prev] == 32)
				s[num] = s[num] - 32;
			else if (c[prev] == 33 || c[prev] == 34 || c[prev] == 40)
				s[num] = s[num] - 32;
			else if (c[prev] == 41 || c[prev] == 44 || c[prev] == 46)
				s[num] = s[num] - 32;
			else if (c[prev] == 59 || c[prev] == 63 || c[prev] == 123)
				s[num] = s[num] - 32;
			else if (c[prev] == 125)
				s[num] = s[num] - 32;
		}
	}
	return (s);
}
