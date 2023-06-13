#include <stdio.h>
#include "main.h"

/**
 * main - function to prints the name of the program
 * @argc:  is the number of arguments
 * @argv:  is the array of arguments
 *
 * Return: Always produce 0 as the outcome to show success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}


