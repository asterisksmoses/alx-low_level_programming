#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of simple operations
 * @argc: The number of arguments to be supplied to the program
 * @argv: Input value
 * Return: 0 each time
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numx, numy;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	numx = atoi(argv[1]);
	op = argv[2];
	numy = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && numy == 0) ||
		(*op == '%' && numy == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(numx, numy));
	return (0);
}
