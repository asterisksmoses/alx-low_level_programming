#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints the opcedes of itself
 * @argc: The number of arguments
 * @argv: An array of pointers to the args
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	int bytesx, index1;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytesx = atoi(argv[1]);

	if (bytesx < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index1 = 0; index1 < bytesx; index1++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index1 == bytesx - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
