#include "main.h"
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer received by function
 * @to: character to which the value of the pointer is set
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
