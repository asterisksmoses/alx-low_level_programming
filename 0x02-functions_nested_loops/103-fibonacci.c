#include <stdio.h>

/**
 * main - prints sum of even Fibonacci numbers
 * less than 4000000.
 * Return: 0 each time
 */

int main(void)
{
	int x = 0;
	long y = 1, c = 2, sum = c;

	while (c + y < 4000000)
	{
	c += y;
	if (c % 2 == 0)
	sum += c;
	y = c - y;
	++x;
	}
	printf("%ld\n", sum);
	return (0);
}
