#include "main.h"

/**
 * *_memset - A function that fills a block of memory with a
 * specific value
 * @s: input value which is the starting address of memory to be filled
 * @b: The desired value to be used
 * @n: number of bytes to be changed
 * Return: changed array whic has a new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	x = 0;
	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
