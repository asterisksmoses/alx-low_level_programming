#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 upon success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *str;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	str = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(str) == NULL || str[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*str == '/' && y == 0) ||
		(*str == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(str)(x, y));
	return (0);
}
