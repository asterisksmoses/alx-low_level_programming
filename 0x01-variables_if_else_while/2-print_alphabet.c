#include <stdio.h>
/**
 * main - entry point
 * Return: every time 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z';)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
