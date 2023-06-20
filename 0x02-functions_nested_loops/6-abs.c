#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @x: is the value to be computed
 * Return: absolute value of number or 0
 */

int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;

		abs_val = x * -1;
		return (abs_val);
	}
	return (x);
}
