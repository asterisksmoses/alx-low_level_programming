#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints the name of the program
 * @argc: Number of arguments
 * @argv: Array of arguments passed to the command line
 * Return: 0 each time
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
