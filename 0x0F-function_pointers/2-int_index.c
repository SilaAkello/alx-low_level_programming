#include "function_pointers.h"
/**
 * int_index - will always return index place if comparison = true, else -1
 * @array: here will showcase array
 * @size: is a size of elements in array
 * @cmp: will be a pointer to func of one of the 3 in main
 * Return: digit 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}









