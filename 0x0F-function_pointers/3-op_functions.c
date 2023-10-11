#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Function that adds two numbers
 * @a: The first value
 * @b: The second value
 * Return: The sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that finds the difference between two numbers
 * @a: The first value
 * @b: The second value
 * Return: The difference between the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that finds the product between two numbers
 * @a: The first value
 * @b: The second value
 * Return: The product of two value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two numbers
 * @a: The first number
 * @b: The second number
 * Return: The result of the division of the two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function that finds the modulus between two numbers
 * @a: The first value
 * @b: The second value
 * Return: The result of the division of two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
