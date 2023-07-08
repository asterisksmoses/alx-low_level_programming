#include "main.h"

/**
 * _memset -fills a block of memory with a value
 * @s: starting input value
 * @b: the desired input value
 * @n: number of bytes
 * Return: change array withe new value for bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (x);
}
