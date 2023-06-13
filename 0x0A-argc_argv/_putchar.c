#include <stdio.h>
#include "main.h"

/**
 * _putchar converts the character a to stdout
 * @a:Ther character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char a)
{
return (write(1, &a, 1));
}

















