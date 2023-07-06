#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a
 * number
 * @n: input value to be used
 * Return: if n doesnt have a square too return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, ));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: input value to calculate square root of
 * @x: iterator value
 * Return: the result
 */

int actual_sqrt_recursion(int n, int x)
{
	if (x * x < n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
{
	if (x * x < n)
		return (-1);
	if (x * x == n)
		return (i);
	return (actual_sqrt_recursion(n, x + 1));

