#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: input value
 * @b: input value
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: the first input value
 * @b: the second input value
 * Return: the difference of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: the first input value
 * @b: the second input value
 * Return: the product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of two numbers
 * @a: the first input value
 * @b: the second input value
 * Return: returns the result of the division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  returns the remainder of the division of two numbers
 * @a: the first input value
 * @b: the second input value
 * Return:  returns the remainder of the division of two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}

