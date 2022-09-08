#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the sizes of various types on yhe computer it is
 * compiled and run on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(long long int);
	int e = sizeof(float);

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %d bytes(s)\n", d);

	return (0);
}
