#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * print out a quote without printf or puts.
 * write is a way of communicating between users but it serves
 *
 * Return: return 1 for success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, 59);
	return (1);
}
