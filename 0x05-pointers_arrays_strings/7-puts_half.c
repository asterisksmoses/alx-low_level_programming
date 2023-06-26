#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, u, longi;

	longi = 0;

	for (x = 0; str[x] != '\0'; x++)
		longi++;

	u = (longi / 2);

	if ((longi % 2) == 1)
		u = ((longi + 1) / 2);

	for (x = u; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
