#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * followed by a new line
 * Return - each time 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
