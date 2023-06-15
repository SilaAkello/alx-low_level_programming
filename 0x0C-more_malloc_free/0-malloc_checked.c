#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - THis here will be  allocating memory using malloc
 * @b:  is the number of bytes to allocate
 *
 * Return- which is the  pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}















