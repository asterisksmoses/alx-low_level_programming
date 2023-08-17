#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: Lists all trpes of arguments passed to the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *xyz, *sep = "";

	va_list phd;

	va_start(phd, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(phd, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(phd, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(phd, double));
					break;
				case 's':
					xyz = va_arg(phd, char *);
					if (!xyz)
						xyz = "(nil)";
					printf("%s%s", sep, xyz);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
	}
}
