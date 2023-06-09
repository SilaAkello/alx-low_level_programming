#include "main.h"
/**
 * _strcmp - THos will be used to compare string values
 * @s1: input value one
 * @s2: input value two
 *
 * Return: s1[silas] - s2[silas]
 */
int _strcmp(char *s1, char *s2)
{
	int silas;


	silas = 0;
	while (s1[silas] != '\0' && s2[silas] != '\0')
	{
		if (s1[silas] != s2[silas])
		{
			return (s1[silas] - s2[silas]);
		}
	silas++;
	}
	return (0);
}
 

