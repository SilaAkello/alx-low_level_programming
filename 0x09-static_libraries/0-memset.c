
#include "main.h"
/**
* _memset - This is a that Program fills a block of memory with a specific value
* s: This is the starting address of memory to be filled
* b: This is supposed to be the desired value
* n: Refer to a number of bytes to be changed 
* Return: This one takes upon itself to change array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
   	int a = 0;
        for (; n > 0; a++)
   	{
          	s[a] = b;
          	n--;}
   	return (s);
}


