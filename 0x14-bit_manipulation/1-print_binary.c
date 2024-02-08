#include "main.h"

/**
 * print_binary - Function that prints the binary representation
 * of a number
 * @n: Input value
 */

void print_binary(unsigned long int n)
{
	unsigned long int mk = 1UL << (sizeof(unsigned long int)
	* 8 - 1);
	int fl = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mk)
	{
		if (n & mk)
		{
			_putchar('1');
			fl = 1;
		}
		else if (fl)
			_putchar('0');

		mk >>= 1;
	}
}
