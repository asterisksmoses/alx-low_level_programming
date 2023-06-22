#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9 followed by a new line
 * Return: 0 upon success
 */

void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
