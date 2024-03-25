#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @x: is the value to be computed
 * Return: absolute value of number or 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
