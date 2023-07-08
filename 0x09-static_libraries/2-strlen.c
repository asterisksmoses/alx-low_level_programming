#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input strinhg value
 * Return: length of the string
 */

int _strlen(char *s)
{
	int longx = 0;

	while (*s != '\0')
	{
		longx++;
		s++;
	}
	return (longx);
}
