#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character
 * @c: The character to be checked
 * Return: If c is a letter otherwise return 0;
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
