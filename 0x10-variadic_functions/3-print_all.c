#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - prints input char
 * @arg: pointer to the character to be printed
 */
void print_char(va_list arg)
{
	putchar(va_arg(arg, int));
}

/**
 * print_int - prints an int
 * @arg: pointer to the int to be printed
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: pointer to float to be printed
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_str - prints a string
 * @arg: pointer to string to be printed
 */
void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints all data types entered
 * @format: string showing order and types of data to be printed
 *
 * Description: Any char of str format that is not c, i, f or s
 *		is to be ignored.
 *		c is char, i is int, f is float and s is string.
 *		If a string argument is NULL, print (nil) instead
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(args, format);

	/* loop through every element in the input string */
	while (format && format[i])
	{
		j = 0;

		/* while the char is not c, i, f or s dont do anything */
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			/*print empty str 1st and separator later*/
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	putchar('\n');

	va_end(args);
}
