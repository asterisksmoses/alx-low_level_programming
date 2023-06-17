#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints numbers of base 16 followed by new line
 * Return: each time 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 9; x++)
	{
		putchar(x);
	}
	for (x = 10; x < 16; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

