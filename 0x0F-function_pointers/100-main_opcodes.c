#include <stdlib.h>
#include <stdio.h>

/**
 * main - Function that prints the opcodes
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*str)(int, char **) = main;
	unsigned char opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (y = 0; y < x; y++)
	{
		opc = *(unsigned char *)str;
		printf("%.2x", opc);

		if (y == x - 1)
			continue;
		printf(" ");
		str++;
	}
	printf("\n");
	return (0);
}
