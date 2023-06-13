#include "main.h"
#include <stdlib.h>
/**
 * argstostr - This is the  main entry
 * @ac:this will be the  int input
 * @av:  here we have a double pointer array
 * Return: will always show and potray 0
 */
char *argstostr(int ac, char **av)
{
	int ii, nn, rr = 0, ll = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ii = 0; ii < ac; ii++)
	{
		for (nn = 0; av[ii][nn]; nn++)
			ll++;
	}
	ll += ac;

	str = malloc(sizeof(char) * ll + 1);
	if (str == NULL)
		return (NULL);
	for (ii = 0; ii < ac; ii++)
	{
	for (nn = 0; av[ii][nn]; nn++)
	{
		str[rr] = av[ii][nn];
		rr++;
	}
	if (str[rr] == '\0')
	{
		str[rr++] = '\n';
	}
	}
	return (str);
}












