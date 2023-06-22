#include "main.h"

/**
 * print_most_numbers - print from 0 to 9 followed by a new line
 * Return:0 each time
 */

void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (!(x == '2' || x == '4'))
		_putchar(x);
	}
	_putchar('\n');
}
