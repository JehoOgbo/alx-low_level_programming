#ifndef MAIN_H
#define MAIN_H

/*include header file to use variadic macros & data types*/
#include <stdarg.h>
/*prototype for function to print formatted output*/
int _printf(const char *format, ...);
/*prototype for function to print a single char*/
void _putchar(char);
/**
 * struct format - holds information of format keyword and
 * 			corresponding output function
 * @symbol: format keyword
 * @print: pointer to function to print specified format type
 * Description: used in function to print type of input specified
 * 		by symbol
 */
typedef struct format {
	char *symbol;
	int (*print)(va_list arg);
} funcs;

#endif /*MAIN_H*/
