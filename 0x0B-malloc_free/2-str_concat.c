#include "main.h"
#include <stdlib.h>
/**
 * str_concat -This is used to  get ends of input and add together for size
 * @s1: This is the number one input to be conacatenated.
 * @s2: this is  the nmber two input to be concatenated.
 * Return: this will show the concatenate of both number one and two.
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	conct = malloc(sizeof(char) * (a + b + 1));

	if (conct == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		conct[a] = s2[b];
		a++, b++;
	}
	conct[a] = '\0';
	return (conct);
}











