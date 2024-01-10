#include "main.h"

int natural_prime(int n, int x);
/**
 * is_prime_number - Function that returns 1 if the input integer
 * is a prime number
 * @n: Input value
 * Return: Nothing
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (1);
	if (n <= 1)
		return (0);
	return (natural_prime(n, n - 1));
}

/**
 * natural_prime - Uses recursion to find if a number is a
 * prime number
 * @n: Input value
 * @x: Iterator
 * Return: 1 if n is a prime number, 0 if not
 */

int natural_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (natural_prime(n, x - 1));
}
