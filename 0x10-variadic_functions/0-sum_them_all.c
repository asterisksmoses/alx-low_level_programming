#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Input value
 * Return: The result of the addition
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;

	va_list xy;

	va_start(xy, n);

	for (x = 0; x < n; x++)
		sum += va_arg(xy, int);
	va_end(xy);
	return (sum);
}
