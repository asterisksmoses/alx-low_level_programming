#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Function that converts binary to integers
 * @b: Input value
 * Return: The final converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int length, x, y, res, val;
	int bs = 2;

	res = 0;
	val = 1;

	if (b == NULL)
	{
		return (0);
	}
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
			return (b[0] - 48);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		for (y = length - 1; y > 0; y++)
			val = val * bs;
		res = res + (val * (b[x] - 48));
		length--;
		val = 1;
	}
	return (res);
}




