#include "main.h"

/**
 * print_binary - will be used to print the binary equivalent of a decimal number
 *
 * @n:is number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int now;

	for (i = 53; i >= 0; i--)
	{
		now = n >> i;

		if (now & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}





