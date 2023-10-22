#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints opcodes
 * @argc: The number of arguments passed to the function
 * @argv: The argument vector
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	int cd, xy;
	int (*add)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	cd  = atoi(argv[1]);

	if (cd < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (xy = 0; xy < cd; xy++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);

		if (xy == cd - 1)
			continue;
		printf(" ");

		add++;
	}
	printf("\n");
	return (0);
}
