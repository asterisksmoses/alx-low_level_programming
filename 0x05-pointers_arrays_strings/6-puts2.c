#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @*str: input
 * Return: print
 */

void puts2(char *str)
{
	int longx = 0;
	int z = 0;
	char *c = str;
	int d;

	while (*c != '\0')
	{
		c++;
		longx++;
	}
	z = longx - 1;
	for (d = 0; d <= z; d++)
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
	}
	_putchar('\n');
}
