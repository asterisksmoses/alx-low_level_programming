#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root
 * of a number
 * @n: Inpit value
 * Return: Nothing
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - Uses recursion to find the natural square
 * root of a number
 * @n: Input value
 * @x: The iterator
 * Return: The resulting square root
 */

int natural_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (1);
	return (natural_sqrt_recursion(n, x + 1));
}
