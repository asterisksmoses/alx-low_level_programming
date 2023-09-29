#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character being checked
 * Return: 1 if c is lowercase or uppercase 0 anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
