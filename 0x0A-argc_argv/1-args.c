#include "main.h"
#include <stdio.h>

/**
 * main - prints the numer of arguments passed to it
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
