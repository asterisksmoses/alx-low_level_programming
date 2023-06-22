#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: 0 each time
 */

void more_numbers(void)
{
	int x, y;

	for (x = 1; x <= 14; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			_putchar('1');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}

