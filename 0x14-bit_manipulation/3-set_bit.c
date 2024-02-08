#include "main.h"
#include <stddef.h>

/**
 * set_bit -  function that sets the value of a bit to 1 at a given
 * index
 * @n: Input value
 * @index: Input value
 * Return: 1 upon succes
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
