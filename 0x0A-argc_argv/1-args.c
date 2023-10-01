#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints the number of arguments passed to it
 * @argc - The number of arguments passed to the program
 * @argv - The array of arguments passed to the program
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
