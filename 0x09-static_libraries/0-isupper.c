#include "main.h"

/**
 * _isupper - check for uppercase letters
 * @c: input to be checked
 * Return: where there is uppercase 1
 * if otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
