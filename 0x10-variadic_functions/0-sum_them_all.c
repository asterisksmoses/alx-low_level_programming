#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its
 * parameters
 * @n: Input value
 * Return: The final sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, count = 0;

	va_list cx;

	va_start(cx, n);

	if (n == 0)
	{
		return (0);
	}
	for (x = 0; x < n; x++)
	{
		count =+ va_arg(cx, int);
	}
	va_end(cx);

	return (count);
}
