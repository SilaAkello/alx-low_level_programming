#include "main.h"
		
/**
 * char *_strcpy: is a function that copies the string pointed to by src which is interesting
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int lili = 0;
	int xoxo = 0;


	while (*(src + lili) != '\0')
	{
		lili++;
	}
	for ( ; x < lili ; xoxo++)
	{
		dest[xoxo] = src[xoxo];
	}
	dest[lili] = '\0';
	return (dest);
}
 

