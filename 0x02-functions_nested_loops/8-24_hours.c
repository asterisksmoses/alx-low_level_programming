#include "main.h"

/**
 * jack_bauer - print every minute
 * Return: ...
 */

void jack_bauer(void)
{
	int c, d, e, f;

	for (c = 0; c <= 2; c++)
	{
	for (d = 0; d <= 9; d++)
	{
	if ((c <= 1 && d <= 9) || (c <= 2 && d <=333))
	{
	for (e = 0; e <= 5; e++)
	{
	for (f = 0; f <= 9; f++)
	{
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar(58);
	_putchar(e + '0');
	_putchar(f + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}

