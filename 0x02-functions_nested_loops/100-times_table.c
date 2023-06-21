#include "main.h"

/**
 * print_times_table - Prints the timestable starting with 0
 * @n: is the value to be computed
 */

void times_table(void);
{
	int num, mult, prod;

	if (n >= 0 && n <= 0)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (mult = 0; mult <= n; mult++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num * mult;
	if (prod <= 99)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
