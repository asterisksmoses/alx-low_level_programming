#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints the number of arguments passed to it
 * @argc: The number of arguments passed to the program
 * @argv: The argument vector
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int x;

	(void)argv;

	if (argc > 1)
	{
		for (x = 0; x < argc; x++)
		{
			printf("%d\n", x);
		}
	}
	return (0);
}

