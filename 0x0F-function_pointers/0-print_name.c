#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - THis will be used to print name using pointer to function
 * @name- this is used for  string to add
 * @f:  here we have a pointer to function
 * Return: will show nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}


