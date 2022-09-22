#include "main.h"
#include <string.h>

/**
 * infinite_add - finds the sum of two numbers and returns then in a buffer not bigger than a particular size
 *
 * n1: input string
 * n2: input string
 * r: return value if success
 * size_r: allowed size of r
 *
 * Return: r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a;
	
	r = n1 + n2;
	a = sizeof(r);
	if (a > size_r)
		return (0);
	else
		return (r);
}
