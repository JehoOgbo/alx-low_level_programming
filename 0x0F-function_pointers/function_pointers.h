#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
/* declaration for function to print a name using ptr to a function */
void print_name(char *name, void (*f)(char *));
/* prototype to execute func given as parameter on each element of array */
void array_iterator(int *array, size_t size, void (*action)(int));
/* prototype to search for an integer */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
