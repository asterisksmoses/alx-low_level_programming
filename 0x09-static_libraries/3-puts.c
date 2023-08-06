#include "main.h"

/**
 * _puts - Function that prints a string to stdout
 * @s: The input string to be printed
 * _putchar prints a new line
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
