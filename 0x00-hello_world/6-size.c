#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = sizeof(char);
	char b = sizeof(int);
	char c = sizeof(long int);
	char d = sizeof(long long int);
	char e = sizeof(float);

	printf("Size of a char: %s". "a");
	printf("Size of an int: %s"."b");
	printf("Size of a long int: %s"."c");
	printf("Size of a long long int: %s"."d");
	printf("Size of a float: %s"."e");

	return (0);
}
