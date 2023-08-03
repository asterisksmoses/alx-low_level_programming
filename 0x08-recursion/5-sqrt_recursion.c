#include "main.h"

int actual_sqrt_recursion(int n, int y);
/**
 * _sqrt_recursion - function that returns the natural square root of
 * a number
 * @n: input number to find square root of
 * Return: The result of the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recursively finds the natural square
 * root of a number
 * @n: input value to calculate square root of
 * @y: input iterator
 * Return: The result of the square root
 */

int actual_sqrt_recursion(int n, int y)
{
	if (y * y > n)
	{
		return (-1);
	}
	if (y * y == n)
	{
		return (y);
	}
	return (actual_sqrt_recursion(n, y + 1));
}
