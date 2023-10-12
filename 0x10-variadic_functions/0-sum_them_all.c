#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Input value
 * Return: The final sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;

	int cx = 0;

	va_list mod;

	va_start(mod, n);

	for (x = 0; x < n; x++)
		cx += va_arg(mod, int);
	va_end(mod);
	return (cx);
}
