#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: Input value that lists all types of arguments passed
 * to a function.
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *xyz, *cfc = "";

	va_list mod;

	va_start(mod, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", cfc, va_arg(mod, int));
					break;
				case 'i':
					printf("%s%d", cfc, va_arg(mod, int));
					break;
				case 'f':
					printf("%s%f", cfc, va_arg(mod, double));
					break;
				case 's':
				xyz = va_arg(mod, char *);
				if (!xyz)
					xyz = "(nil)";
				printf("%s%s", cfc, xyz);
				break;
			default:
				x++;
				continue;
			}
			cfc = ", ";
			x++;
		}
	}
}
