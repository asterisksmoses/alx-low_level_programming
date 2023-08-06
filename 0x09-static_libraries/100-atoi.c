#include "main.h"

/**
 * _atoi - Function that converts a string to an integer
 * @s: The string to be converted
 * Return: The integer
 */

int _atoi(char *s)
{
	int sign = 1, x = 0;
	unsigned int unsign = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			sign *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		unsign = (unsign * 10) + (s[x] - '0');
		x++;
	}
	unsign *= sign;
	return (unsign);
}
