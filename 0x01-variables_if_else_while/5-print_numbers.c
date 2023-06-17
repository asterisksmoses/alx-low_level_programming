#include <stdlib.h>
#include <stdio.h>

/**
 * main - print single digit number from 0 to 9
 * Return: each time 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
