#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: The string to be used
 * Return: 0 each time
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
