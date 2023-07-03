#include "main.h"

/**
 * _strspn - function that gets the length of prefix substring
 * @s: input value
 * @accept: input value
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				x++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
