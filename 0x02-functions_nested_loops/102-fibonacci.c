#include <stdio.h>

/**
 * main - prints the first 52 fibonacci characters
 * Return: 0 each time
 */

int main(void)
{
	int x = 0;
	long y = 1, c = 2;

	while (x < 50)
	{
	if (x == 0)
	printf("%ld", c);
	else
	{
	c += y;
	y = c - x;
	printf(",%ld", c);
	}
	++x;
	}
	printf('\n');
	return (0);
}
