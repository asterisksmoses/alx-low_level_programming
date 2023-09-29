#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @needle: the substring in search
 * @haystack: the string under the search
 * Return: a pointer if the substring is located
 * NULL of the substring is not located
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);
				x++;
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
