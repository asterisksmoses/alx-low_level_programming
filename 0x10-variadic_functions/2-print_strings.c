#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings followed ny a new line
 * @separator: The strings to be printed between the strings
 * @n: The number of strings to be passed to the function
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *xyz;

	va_list phd;

	va_start(phd, n);

	for (x = 0; x < n; x++)
	{
		xyz = va_arg(phd, char *);
		if (!xyz)
		{
			xyz = "nil";
		}
		if (!separator)
			printf("%s", xyz);
		else if (separator && x == 0)
			printf("%s", xyz);
		else
			printf("%s%s", separator, xyz);
	}
	printf("\n");
	va_end(phd);
}
