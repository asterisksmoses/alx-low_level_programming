#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints a new name followed by a new line
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 each time
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
