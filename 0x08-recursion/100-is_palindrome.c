#include "main.h"

/**
 * len - finds the length of a string
 * @s: string in question
 *
 * Return: length of the string
 */
int len(char *s)		/* recursive function to get the length of the string */
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * _strcmp - compares the two strings
 * @i: beginning index
 * @j: end index
 * @s: input string
 *
 * Return: 1 if match, 0 if not match
 */
int _strcmp(char *s, int i, int j)		/* function doing the actual comparison */
{
	if (s[i] != s[j])		/* checking case if the converging characters don't match */
		return (0);
	else if (i == j && s[i] == s[j])		/* checking the middle character in odd-length strings */
		return (1);
	else if (i == j - 1 && s[i] == s[j])		/* checking both middle characters in even-length strings */
		return (1);
	else		/* continues running of the function if the middle is not yet reached */
		return (_strcmp(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length, i, j;		/* declaring variables to mark the first and last chars in string */

	length = len(s);		/* calling the len() function to get the value of given string */
	i = 0;
	j = length - 1;

	if (length == 0 || length == 1)		/* checks if the string is empty or contains only one character */
		return (1);
	else
		return (_strcmp(s, i, j));		/* sends string into compare funtion: Recursive call */
}
