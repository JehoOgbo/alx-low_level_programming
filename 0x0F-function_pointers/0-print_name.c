#include "function_pointers.h"

/**
 * print_name - function to print string plus name of a person
 * @name: name of the person to be printed
 * @f: function that performs the printing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)	/* check if there is an input name and a function */
		f(name);	/*pass string to ptr to function that prints*/

}
