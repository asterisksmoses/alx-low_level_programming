#include <stddef.h>
#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given
 * index
 * @n: Input value
 * @index: Input value
 * Return: 1 upon success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
