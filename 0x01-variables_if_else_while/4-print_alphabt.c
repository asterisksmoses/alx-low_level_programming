#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints alphabets without q and e
 * Return: 0 each time (success)
 */

int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 133)
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
