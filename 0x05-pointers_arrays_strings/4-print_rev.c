#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input to be executed
 * Return: 0
 */

void print_rev(char *s)
{
	int longx = 0;
	int y;

	while (*s != '\0')
	{
		longx++;
		s++;
	}
	s--;
	for (y = longx; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
