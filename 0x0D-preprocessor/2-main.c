#include <stdio.h>

/**
 * main - program that prints the name of the
 * file it was compiled from then newline
 *
 * Return: 0 success
 */
int main(void)
{
	printf("%s\n", __FILE__);	/*use defined macro to get filename*/
	return (0);
}
