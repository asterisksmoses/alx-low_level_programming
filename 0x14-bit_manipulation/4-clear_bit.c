#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0
 * ata a given index
 * @n: Input value
 * @index: Input value
 * Return: 0 each time
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cover;

	cover = 1;
	cover = cover << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	if (((*n >> index) & 1) == 1)
	{
		*n = cover ^ *n;
	}

	return (1);
}
