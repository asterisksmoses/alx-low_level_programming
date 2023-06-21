#include <stdio.h>

/**
 * main - prints sum of even Fibonacci numbers
 * less than 4000000.
 * Return: 0 each time
 */

int main(void)
{
	int x = 0;
	long y = 1, z = 2, sum = c;

	while (z + y < 4000000)
	{
	z += y;
	if (z % 2 == 0)
	sum += z;
	y = z - y;
	++x;
	}
	printf("%ld\n", sum);
	return (0);
}
