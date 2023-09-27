#include "main.h"

int nat_sqrt_recursion(int n, int x);
/**
 * _sqrt_recursion - Function that return the natural sqaure root of a
 * number
 * @n: Input value
 * Return: 0 each time
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (nat_sqrt_recursion(n, 0));
}

/**
 * nat_sqrt_recursion - Recursively finds the natural square root of a
 * number
 * @n: The Input value
 * @x: The Iterator
 * Return: The square root
 */

int nat_sqrt_recursion(int n, int x)
{
	if (x * x < n)
		return (-1);
	if (x * x == n)
		return (x);
	return (nat_sqrt_recursion(n, x + 1));
}
