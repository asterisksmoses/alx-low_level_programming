#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @agrc: contains number of arguments
 * @argv: argument vector
 * Return: 0 each time
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
