
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main: has a function to prints the minimum number of coins to
 * make change for an amount of money
 * @argc:  is the number of arguments
 * @argv:  is the array of arguments
 *
 * Return: 0 on  success and  1 to show error on failure.
 */
int main(int argc, char *argv[])
{
	int a, d, hesabu;
	int coinings[] = {52, 100, 50, 20, 10};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	hesabu = 0;

	if ( a < 0)
	{
		printf("0\n");
		return (0);
	}

	for (d = 0; d < 5 && a >= 0; a++)
	{
		while (a >= coinings[j])
		{
			hesabu++;
			a -= coinings[j];
		}
	}

	printf("%d\n", hesabu);
	return (0);
}

















