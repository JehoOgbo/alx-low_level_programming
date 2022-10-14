#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * print_char - prints a char
 * @arg: pointer to char argument to be printed
 * Description : prints char and returns 1 for each character printed
 * Return: 1;
 *
int print_char(va_list arg)
{
	char *c = arg;

	write(1, c, 1);
	return (1);
}*/

/**
 * print_str - prints a str
 * @arg: pointer to a str to be printed
 *
 * Return: length of str
 */
/**int print_str(va_list arg)
{
	char *str = arg;
	int n = strlen(str);

	write(1, c, (sizeof(char) * n));
	return (n);
}*/

/**
 * _printf - prints formatted output
 * @format: gives info about format of input to be entered
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int n;

	n = strlen(format);
	write(1, format, n);
	return (n);
}
