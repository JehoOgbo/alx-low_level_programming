#include "main.h"
#include <string.h>

/**
 * leet - encoding function. Encodes a, e, o, t, l
 *
 * @c - array of charcters
 *
 * Return: 0
 */
char *leet(char *c)
{
	int a;
	int b;
	int d;
	char s1[] = "aeotl";
	char S2[] = "AEOTL";
	char s3[] = "43071";

	a = 0;
	d = strlen(c);
	while (a < d)
	{
		for (b = 0; b < 5; b++)
		{
			if (c[a] == s1[b] || c[a] == S2[b])
			{
				c[a] = s3[b];
				break;
			}
		}
		a++;
	}
	return (c);
}
