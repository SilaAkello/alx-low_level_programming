#include "main.h"
#include <unistd.h>
/**
 * _putchar - ll od the simple work of writting the character c to stdout
 * @c- is the  character to  be printed out.
 *
 * Return- upon  success 1 show that number.
 * On error- -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


