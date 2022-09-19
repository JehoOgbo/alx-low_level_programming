#include "main.h"
#include <string.h>

/**
 * _strcpy - function to copy a string to another
 *
 * @dest: string to be copied to / replaced
 * @src: string to be copied
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return(*dest);
}
