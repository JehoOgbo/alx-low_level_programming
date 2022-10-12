#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects correct function for specified operation
 * @s: input char for operation
 * @a: first number
 * @b: second number
 *
 * Return: pointer to operation corresponding to operator given as parameter
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 5)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
