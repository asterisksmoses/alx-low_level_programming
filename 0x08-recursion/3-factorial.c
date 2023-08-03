#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: the input value
 * Return: If n is less than 0 return -1 to show an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
