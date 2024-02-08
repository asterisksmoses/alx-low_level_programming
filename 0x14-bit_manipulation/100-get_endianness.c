#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 upon big endian and 1 uponthe little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *endian_str = (char *)&x;

	if (*endian_str == 1)
		return (1);
	else
		return (0);
}
