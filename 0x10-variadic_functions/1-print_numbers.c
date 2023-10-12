#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers followed by a new
 * line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list cfc;

	va_start(cfc, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(cfc, int));
		else if (separator && x == 0)
			printf("%d", va_arg(cfc, int));
		else
			printf("%s%d", separator, va_arg(cfc, int));
	}
	va_end(cfc);
	printf("\n");
}
