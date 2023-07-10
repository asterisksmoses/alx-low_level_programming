#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: 0 each time success
 */

int check_num(char *str)
{
	unsigned int num;

	num = 0;
	while (num < strlen(str))
	{
		if (!isdigit(str[num]))
		{
			return (0);
		}
		num++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argc: counts the arguments
 * @argv: array of arguments
 * Return: 0 each time
 */

int main(int argc, char *argv[])
{
	int num1;
	int str_to_int;
	int sum = 0;

	num1 = 1;
	while (num1 < argc)
	{
		if (check_num(argv[num1]))
		{
			str_to_int = atoi(argv[num1]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		num1++;
	}
	printf("%d\n", sum);
	return (0);
}
