#include "main.h"
/**
 * _atoi -THis one here convert a string into an integer.
 *
 * @s:this is the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
 	int signing = 1, ib = 0;
 	unsigned int residual = 0;


 	while (!(s[ib] <= '9' && s[ib] >= '0') && s[ib] != '\0')
 	{
 		if (s[ib] == '-')
 			signing *= -1;
 		ib++;
 	}
 	while (s[ib] <= '9' && (s[ib] >= '0' && s[ib] != '\0'))
 	{
 		res = (residual * 10) + (s[ib] - '0');
 		ib++;
 	}
 	residual *= signing;
 	return (residual);
 }



