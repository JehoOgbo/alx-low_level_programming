#include <stdio.h>

/**
 * pre_main - function executed before main
 * Return: No return value
 */
void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
