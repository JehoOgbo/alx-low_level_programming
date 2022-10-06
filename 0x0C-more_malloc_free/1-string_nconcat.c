#include "main.h"

/**
 * _strlen - finds the length of a string
 *
 * @str: string to be checked
 * Return: length of a string
 */
int _strlen(str)
{
	int i;

	for (i = 0; str[i]; ++i)
		;
	return (i);
}

/**
 * string_nconcat - function to concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to which second string should be
 * copied to
 *
 * Return: pointer to new string null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	int len, 

	nconcat = malloc(
