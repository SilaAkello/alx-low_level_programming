#include "main.h"

/**
 * set_bit -will be used to set a bit at a given index to 1
 *
 * @n: is the  pointer to the number to change
 *
 * @index: is the  index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

