#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, e, las, g, vamos;

	a = 0;
	b = 0;
	e = 0;
	las = 0;
	vamos = 0;
	g = 0;

	while (s[las] != '\0')
		las++;

	while (a < las && vamos == 0)
	{
		if (s[a] == '-')
			++e;

		if (s[a] >= '0' && s[a] <= '9')
		{
			g = s[a] - '0';
			if (vamos % 2)
				g = -g;
			e = e * 10 + g;
			g = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			las = 0;
		}
		a++;
	}

	if (las == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int answer, one, two;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

        one = _atoi(argv[1]);
	two = _atoi(argv[2]);
	answer = one * two;

	printf("%d\n", answer);

	return (0);
}





