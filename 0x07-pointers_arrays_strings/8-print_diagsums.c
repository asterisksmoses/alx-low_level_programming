#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum
 * of the two diagonals of a square matrix
 * @a: input to be used
 * @size: input to be used
 */

void print_diagsums(int *a, int size)
{
	int x, num1 = 0, num2 = 0;

	for (x = 0; x < size; x++)
	{
		num1 += a[x];
		a += size;
	}
	a -= size;

	for (x = 0; x < size; x++)
	{
		num2 += a[x];
		a -= size;
	}
	printf("%d, %d\n", num1, num2);
}

