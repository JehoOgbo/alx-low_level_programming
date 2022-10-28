#ifndef MAIN_H
#define MAIN_H

/* include function for itoa, strlen and strdup */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*function to convert binary to unsigned int. Returns converted number*/
unsigned int binary_to_unit(const char *b);
/* function to print binary from decimal using bitwise operators */
void print_binary(unsigned long int n);
/* function to get value of a bit at given index. Return 1, 0 or -1 */
int get_bit(unsigned long int n, unsigned int index);
/* function to set value of a bit to 1 at given index, Return 1 or -1 */
int set_bit(unsigned long int *n, unsigned int index);
/* function to clear value of bit at given index; Return 1 or -1 */
int clear_bit(unsigned long int *n, unsigned int index);
/* function to get amount of bits to be flipped to get a number from another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /*MAIN_H*/
