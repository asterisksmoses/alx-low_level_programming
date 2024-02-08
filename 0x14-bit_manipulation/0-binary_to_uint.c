#include "main.h"
#include <stddef.h>

/**
 * int binary_to_uint - Function that converts a binary number to
 * an unsigned int
 * @b: A pointer to string
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		x = (x << 1) + (*b - '0');
		b++;
	}

	return (x);
}
