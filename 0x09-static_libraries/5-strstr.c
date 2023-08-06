#include "main.h"

/**
 * _strstr - Function used to locate occurence of a substring
 * @haystack: String input valie
 * @needle: Substring input value
 * Return: 0 each time
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
