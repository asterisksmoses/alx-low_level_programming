#include "main.h"

int init_prime(int n, int x);

/**
 * is_prime_number - Function that returns 1 if the input integer is
 * a prime number otherwise return 0
 * @n: Input value
 * Return: 0 each time
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (init_prime(n, n - 1));
}

/**
 * init_prime - recursively finds the prime number of an integer
 * @n: Input value
 * @x: The Iterator
 * Return: 1 if n is a prime number and 0 if otherwise
 */

int init_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (init_prime(n, n - 1));
}
