#include "main.h"
/**
 * _strchr -  This is a function on Entry point
 * @s: input one
 * @c: input two
 * Return: Always return 0 to show succees
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}



