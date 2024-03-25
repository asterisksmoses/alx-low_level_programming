#include "main.h"

/**
 * *_strpbrk - function that searches for any
 * set of bytes
 * @s: string to be located
 * @accept: the string input
 * Return: s if the program is successful
 * NULL if otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
