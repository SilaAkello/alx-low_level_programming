#include <stdio.h>
#include "main.h"

/**
 * main - whose work is to print the number of arguments passed to the program
 * @argc:  is the number of arguments in it.
 * @argv: is the array os arguments in it.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

