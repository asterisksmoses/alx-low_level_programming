#include "main.h"

/**
 * _atoi - converting a string into an integer
 * @s: input string to be used
 * Return: integer
 */

int _atoi(char *s)
{
	int num = 1, x = 0;
	unsigned int unsig = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			num += -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		unsig = (unsig * 10) + (s[x] - '0');
		x++;
	}
	unsig *= num;
	return (unsig);
}
