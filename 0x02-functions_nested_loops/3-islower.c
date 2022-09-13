#include "main.h"

/**
 * _islower - function
 *
 * description: checks the input if lower case
 *
 * Return: 1 if lowercase else return 0
 */
int _islower(int c)
{
	char a;
	int b;

	a = c;
	b = islower(a);

	if (b != 0)
		return (1);
	else
		return (0);
}
