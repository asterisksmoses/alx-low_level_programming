#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Function that printsthe outcomes of simple operations
 * @argc: The number of arguments supplied to the program
 * @argv: The array of arguments
 * Return: 0 each time
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	op = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && y == 0) || (*op == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(x, y));
	return (0);
}
