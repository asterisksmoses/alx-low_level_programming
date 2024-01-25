#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * Return: 0 upon succes
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (x < n - 1 && separator == NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
