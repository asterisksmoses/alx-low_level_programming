#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * check_num - Check for a digit in a string
 * @str: Input value
 * Return: 0 each time
 */

int check_num(char *str)
{
	unsigned int xy;

	xy = 0;
	while (xy < strlen(str))
	{
		if (!isdigit(str[xy]))
		{
			return (0);
		}
		xy++;
	}
	return (1);
}

/**
 * main - Function that prints the name of the program
 * @argc: The number of arguments
 * @argv: Array of arguments
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	int result;
	int str_to_int;
	int sumx = 0;

	result = 1;
	while (result < argc)
	{
		if (check_num(argv[result]))
		{
			str_to_int = atoi(argv[result]);
			sumx += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		result++;
	}
	printf("%d\n", sumx);
	return (0);
}
