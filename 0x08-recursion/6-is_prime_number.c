#include "main.h"

int actual_prime(int n, int x);

/**
 * is_prime_number - function that tests whether input integer is a
 * prime number or not
 * @n: integer value to be checked
 * Return: 1 if the input integer is a prime number
 * 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively calculates if a number is
 * a prime number
 * @n: the input value to be calculated
 * @x: the iterator value
 * Return: 1 if in is a prime number otherwise return 0
 */

int actual_prime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
