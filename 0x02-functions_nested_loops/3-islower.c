#include "main.h"
#include <ctype.h>
/**
 * _islower - function
 *
 * description: checks the input if lower case
 *
 * Return: 1 if lowercase else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
