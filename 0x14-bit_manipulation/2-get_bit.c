#include "main.h"

/**
 * get_bit - Function that returns the valueof a bit
 * at a given index
 * @n: Input value
 * @index: Input value
 * Return: The value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (x = 0; x < index; x++)
		x = x >> 1;
	return ((n & 1));
}
