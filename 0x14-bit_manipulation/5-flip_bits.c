#include "main.h"

/**
 * flip_bits - Function that  returns the number of bits you would
 * need to flip to get from one number to another
 * @n: Input value
 * @m: Input value
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned long int val;

	res = n ^ m;
	for (val = 0; res > 0;)
	{
		if ((res & 1) == 1)
			val++;
		res = res >> 1;
	}
	return (val);
}
