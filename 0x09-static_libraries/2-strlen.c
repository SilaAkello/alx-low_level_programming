#include "main.h"
/**
 * _strlen -  this  is just a function to returns the length of a string
 * @s: this is the string to input
 * Return: length
 */
int _strlen(char *s)
{
	int silas = 0;


	while (*s != '\0')
	{
		silas++;
		s++;
	}


	return (silas);
}



