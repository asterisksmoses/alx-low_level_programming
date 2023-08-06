#include "main.h"

/**
 * _strpbrk - The program's entry point
 * @s: Input value
 * @accept: Input value
 * Return: 0 each time
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
			s++;
		}
	}

	return ('\0');
}
