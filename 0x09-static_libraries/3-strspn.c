#include "main.h"

/**
 * _strspn - The program point of entry
 * @s: An input value
 * @accept: Input value
 * Return: 0 each time
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (y);
}
