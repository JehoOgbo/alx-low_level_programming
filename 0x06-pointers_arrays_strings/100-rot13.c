#include "main.h"
#include <string.h>

/**
 * rot13 - rotate each character by 13 places
 *
 * @c: input ascii character
 *
 * Return: rotated output
 */
char *rot13(char *c)
{
	int count;
	int counter;
	int len;
	int lens;
	char fstr[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char chstr[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	len = strlen(c);
	for (count = 0; count < len; count++)
	{
		lens = strlen(fstr);
		for (counter = 0; counter < lens; counter++)
		{

			if (c[count] == fstr[counter])
			{
				c[count] = chstr[counter];
				break;
			}
		}
	}
	return (c);
}
