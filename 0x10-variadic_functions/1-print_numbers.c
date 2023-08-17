#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers to be passed to the function
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ch;

	va_start(ch, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(ch, int));
		else if (separator && x == 0)
			printf("%d", va_arg(ch, int));
		else
			printf("%s%d", separator, va_arg(ch, int));
	}
	va_end(ch);
	printf("\n");
}
