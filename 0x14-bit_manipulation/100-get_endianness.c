#include "main.h"

/**
 * get_endianness - Function that checks for the endianness
 * Return: 0 for big endian, for small endian
 */

int get_endianness(void)
{
	int x = 1;
	int x_or_y;

	x_or_y = (int) (((char *)&x)[0]);
	return (x_or_y);
}
