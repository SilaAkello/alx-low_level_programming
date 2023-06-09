#include "main.h"
/**
 * _strstr - Entry point
 * @mash: input
 * @mello: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *mash, char *mello)
{
	for (; *mello != '\0'; mash++)
	{
		char *l = mash;
		char *p = mello;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return(mash);
	}


	return (0);
}
 
 

