#include "main.h"

/**
 * _puts_recursion - function that prints a string folllowed by
 * a new line
 * @s: input value to be used
 * Return: 0 each time
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
