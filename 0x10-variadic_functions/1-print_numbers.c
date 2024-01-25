#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers followed by a
 * new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * Return: 0 upon success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int total;

	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		total = va_arg(args, int);
		printf("%d", total);
		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
