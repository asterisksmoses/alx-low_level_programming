#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that multiplies two numbers
 * @argc: The number of arguments
 * @argv: The argument vector
 * Return: 1 upon success
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}
