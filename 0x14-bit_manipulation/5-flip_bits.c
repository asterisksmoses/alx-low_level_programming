#include "main.h"

/**
 * int flip_bits - Function that returns the number of bits needed
 * to flip to get from one number to another
 * @n: Input value
 * @m: Input value
 * Return: The number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = n ^ m;
	unsigned int result = 0;

	while (x)
	{
		x &= (x - 1);
		result++;
	}
	return (result);
}
