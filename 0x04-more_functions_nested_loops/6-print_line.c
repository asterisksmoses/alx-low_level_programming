#include "main.h"

/**
 * print_line - print a function that draws a straignt line
 * @n: number of times
 * Return: 0 each time
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
