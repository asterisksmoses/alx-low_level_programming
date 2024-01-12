#include "main.h"
#include <stdio.h>

/**
 * main - function that prints its name followed by a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	if (argc > 0 && argv != NULL)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
