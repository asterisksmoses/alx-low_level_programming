#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given
 * index
 * @n: Input value
 * @index: Input value
 * Return: 1 upon success 0 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cover;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	cover = 1;
	cover = cover << index;
	*n = ((*n) | cover);
	return (1);
}

