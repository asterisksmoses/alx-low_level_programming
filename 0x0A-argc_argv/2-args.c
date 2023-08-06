#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints all the arguments it receives
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
