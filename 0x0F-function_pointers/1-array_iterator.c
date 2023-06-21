#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this will  prints each array element on a newline
 * @array: here we have an array
 * @size: this is how many elements to print
 * @action: THis is a  pointer to print in regular or hexadecimal
 * Return: will show void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}


















