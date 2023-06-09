#include "main.h"
/**
 * _strpbrk -This is the Entry point
 * @s: input one
 * @accept: input accepted
 * Return: Always 0 
 */
char *_strpbrk(char *s, char *accept)
{
	int kilas;


	while (*s)
	{
		for (kilas = 0; accept[kilas]; kilas++)
		{
		if (*s == accept[kilas])
		return (s);
		}
	s++;
	}


return ('\0');
}
 

