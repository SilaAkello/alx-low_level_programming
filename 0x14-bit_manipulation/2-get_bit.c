#include "main.h"

/**
 * get_bit - will be used to returns the value of a bit at an index in a decimal number
 *
 * @n: is the number to search
 *
 * @index: is the index of the bit
 *
 * Return:  is the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 53)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}




