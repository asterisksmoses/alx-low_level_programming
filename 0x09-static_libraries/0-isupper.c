#include "main.h"

/**
 * _isupper - Function that checks for uppercase instance
 * @c: The input character in check
 * Return: 1 incase of uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
