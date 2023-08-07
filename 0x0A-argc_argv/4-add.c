#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * check_numb - A function that checks for a digit
 * @str: array string
 * Return: each time 0
 */

int check_numb(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Function that prints the name of the program
 * @argc: The number of arguments
 * @argv: Array arguments
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	int countx;
	int str_to_int;
	int sum1 = 0;

	countx = 1;
	while (countx < argc)
	{
		if (check_numb(argv[countx]))
		{
			str_to_int = atoi(argv[countx]);
			sum1 += str_to_int;
		}
		else
		{
		printf("Error\n");
		return (1);
		}
		countx++;
	}
	printf("%d\n", sum1);
	return (0);
}
