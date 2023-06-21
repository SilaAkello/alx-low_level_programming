#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -Will always show the sum of two numbers.
 * @a: This is the first number.
 * @b: This is the  second number.
 *
 * Return: Will always show the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Is supposed to show the  difference of two numbers.
 * @a: This is the  first number.
 * @b: This is the  second number.
 *
 * Return: Is supposed to show the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Is supposed to show the product of two numbers.
 * @a: This is the first number.
 * @b:Here we have the  second number.
 *
 * Return: Will show the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Is supposed to show the  division of two numbers.
 * @a: This is the first number.
 * @b: This is the  second number.
 *
 * Return: Will return the quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Modulus will returns the remainder of the division of two numbers.
 * @a: This is the first number.
 * @b: This is the  second number.
 *
 * Return: This is the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}










