#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * Return: each time 0
 */

int main(void)
{
	int x, y;

	for (x = 15; x <= 23; x++)
	{
		for (x = 16; y <= 24; y++)
		{
			if (x > y)
			{
				putchar(x);
				putchar(y);
				if (x != 23 || y != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
