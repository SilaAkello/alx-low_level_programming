#include "main.h"
#include <stdlib.h>
/**
 * create_array -  This is a function to create array of size size and assign char c
 * @size:  This is the size of array
 * @c: char to assign
 * Description:I want to  create array of size size and assign char c
 * Return: here is where I want to show pointer to array, NULL if fail
 *
 */
char *creat_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
















