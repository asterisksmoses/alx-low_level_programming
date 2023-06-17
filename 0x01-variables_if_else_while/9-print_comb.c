#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible combination of digit numbers
 * Return: each time 0
 */

int main(void)
{
	int x;

	for (x = 15; x < 25; x++)
	{
		putchar(x);
		if (x != 24)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
