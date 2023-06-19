#include <stdio.h>

/**
 * main - print alphabets in lower case
 * Return: every time come back to 0
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(alph[x]);
	}
	putchar('\n');
	return (0);
}
