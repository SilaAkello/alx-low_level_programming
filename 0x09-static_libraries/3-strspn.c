#include "main.h"
/**
 * _strspn -This is  Entry point
 * @s: input one
 * @accept: input
 * Return: 0 always on sucess)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int silas;


	while (*s)
	{
		for (silas = 0; accept[silas]; silas++)
		{
			if (*s == accept[silas])
			{
				y++;
				break;
			}
			else if (accept[silas + 1] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}

