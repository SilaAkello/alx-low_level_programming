
#include <stdlib.h>
#include "main.h"

/**
 * count_word - this ia another  function that is used to count the number of words in a string
 * @s : this is the string to be evaluated
 *
 * Return: this is the number of words
 */
int count_word(char *s)
{
	int field, cat, woman;

	field = 0;
	woman = 0;

	for (cat = 0; s[cat] != '\0'; cat++)
	{
		if (s[cat] == ' ')
			field = 0;
		else if (field == 0)
		{
			field = 1;
			woman++;
		}
	}

	return (woman);
}
/**
 * **strtow -this one here will be used to splits a string into words
 * @str: This is the string to split
 *
 * Return: Here is a pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int ii, kk = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (ii = 0; ii <= len; ii++)
	{
		if (str[ii] == ' ' || str[ii] == '\0')
		{
			if (c)
			{
				end = ii;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				kk++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[kk] = NULL;

	return (matrix);
}

