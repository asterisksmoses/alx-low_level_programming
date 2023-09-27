#include "main.h"

/**
 * factorial - Function that return the factorial of a given number
 * @n: The number to be executed
 * Return: 0 each time
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
