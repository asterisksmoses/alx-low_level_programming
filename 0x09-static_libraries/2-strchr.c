#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: input character
 * @c: character in search
 * Return: c if its true NULL if its false
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
