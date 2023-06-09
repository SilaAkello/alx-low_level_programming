#include "main.h"
/**
 * _strncpy: to  copy a string
 * @dest: input value one
 * @src: input value two
 * @n: input value 
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int silas;


	silas = 0;
	while (silas < n && src[silas] != '\0')
	{
		dest[silas] = src[silas];
		silas++;
	}
	while (silas < n)
	{
		dest[silas] = '\0';
		silas++;
	}


	return (dest);
}
 

