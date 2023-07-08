#include "main.h"

/**
 * _strchr - point of entry
 * @s: input value
 * @c: input value
 * Return: 0 each time
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
