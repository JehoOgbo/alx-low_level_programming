#include "main.h"

/**
 * get_endianness - shows whether the machine uses big or little endianness
 * big endianness stores the biggest byte at the least address while little
 * endianness strores the least byte at the least address
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*)&i;

	return ((int)*c);
}
