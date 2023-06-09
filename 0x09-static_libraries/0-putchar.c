#include <unistd.h>
 
/**
 * _putchar:Here we wrrite the characater c to stdout.
 * c: This is the character to print.
 *
 * Return: when the code runs succeesully we return 1.
 *When there is an error -1 is return as the answer.
 */
int _putchar(char c)
{
 return (write(1, &c, 1));
}
 

