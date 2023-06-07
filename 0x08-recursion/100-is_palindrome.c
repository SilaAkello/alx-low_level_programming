
#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/*Check if a string is palindrome*/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/* Function to calculate length of a string and return it*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/* Function to check for palindrome and return 1 if is there and 0 if not present*/
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}



