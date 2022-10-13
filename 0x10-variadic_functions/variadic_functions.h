#ifndef VAR_FUNCS_H
#define VAR_FUNCS_H

#include <stdarg.h>
#include <stddef.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printr - holds info for symbol and corresponding function
 * @symbol: any of c, i, s or f as a string
 * @print: pointer to function that performs corresponding operation
 *
 * Description: a struct to code to be used in an array
 */
typedef struct printr
{
	char *symbol;
	void (*print)(va_list args);
} printer;

#endif /*VAR_FUNCS_H*/
