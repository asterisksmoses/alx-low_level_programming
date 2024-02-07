#include "3-calc.h"

/**
 * op_add - Function that adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The final sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that finds the difference between two numbers
 * @a: The first integer
 * @b: The second integer
 * Return: The difference between the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies two numbers
 * @a: The first number
 * @b: The second number
 * Return: The product of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two number
 * @a: The first integer
 * @b: The second integer
 * Return: The result after dividing the two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Functions that returns the modulus of two numbers
 * @a: Input value
 * @b: Input value
 * Return: The result of the modulus of the two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
