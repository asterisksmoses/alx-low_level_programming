#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Function that prints strings
 * @separator: Seperates the strings
 * @n: The number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *xyz;

	va_list che;

	va_start(che, n);

	for (x = 0; x < n; x++)
	{
		xyz = va_arg(che, char *);
		if (!xyz)
			xyz = "nil";
		if (!separator)
			printf("%s", xyz);
		else if (separator && x == 0)
			printf("%s", xyz);
		else
			printf("%s%s", separator, xyz);
	}
	printf("\n");
	va_end(che);
}
