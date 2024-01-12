#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints out all the arguments it receives
 * @argc: The number of arguments passed to it
 * @argv: The argument vector
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc > 0)
	{
		for (x = 0; x < argc; x++)
		{
			printf("%s\n", argv[x]);
		}
	}
	return (0);
}
