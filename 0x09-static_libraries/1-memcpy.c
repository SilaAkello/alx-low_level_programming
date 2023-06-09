#include "main.h"
/**
 *_memcpy -This will be  a function that copies memory area
 *@dest: here is where the  memory where is stored
 *@src: This is the memory where is copied
 *@n: This will represent number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
 

