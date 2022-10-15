#include <stdarg.h>
#include <unistd.h>

void reverse(char s[]);
/**
 * print_char - prints input char
 * @arg: argument to be printed
 *
 * Return: number of characters printed
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);
	char *s = &c;

	write(1, s, 1);
	return (1);
}

/**
 * strlen - finds the length of a string
 * @c: input string
 *
 * Return: length of string
 */
int _strlen(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
		;
	return (i);
}

/**
 * print_str - prints a string
 * @arg: input string
 *
 * Return: number of characters printed
 */
int print_str(va_list arg)
{
	char *d = va_arg(arg, char*);
	int n;

	n = _strlen(d);
	write(1, d, n);
	return (n);
}

/**
 * print_perc - prints percent character
 * @arg: character to be printed
 *
 * Return: number of characters printed
 */
int print_perc(va_list arg)
{
	char c = '%';
	char *s = &c;

	write(1, s, 1);
	return (1);
}

/**
 * itoa - convert n to characters
 * @n: number to be converted
 * @s: string to input characters
 */
void itoa(int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/**
 * reverse - reverse string in place
 * s: string to be reversed
 *
 * Return: void
 */
void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
/**
 * print_int - prints an integer
 * @arg: integer argument to be printed
 *
 * Return: number of characters printed
 */
int print_int(va_list arg)
{
	int a;
	char *c;

	a = va_arg(arg, int);
	itoa(a, c);
