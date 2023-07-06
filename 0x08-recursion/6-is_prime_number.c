#include "main.h"

int actual_prime(int n, int x);

/**
 * is_prime_number - function that returns
 * @n: input value
 * Return: 1 if the input is a prime number and 0
 * if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - finds if a number is prime
 * recursiveluy
 * @n: number to be evaluated
 * @x: iterator
 *
 * Return: 1 if n is prime, 0 if otherwise
 */

int actual_prime(int n, int x)
{
	if (x == 1)
		return (0);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}

{
	if (n == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, n - 1));
}


