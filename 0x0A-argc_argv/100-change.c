#include "main.h"
#include <stdio.h>

/**
 * main - function that prints a minimum nunber of coins
 * to make change
 * @argc: number of arguments
 * @argv: number of arrays of arguments
 * Return: 0 each time 1 if otherwise
 */

int main(int argc, char *argv[])
{
int num1, int x, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	result = 0;
	if (num1 < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5 && num1 >= 0; x++)
	{
		while (num1 >= coins[x])
		{
			result++;
			num1 -= coins[x];
		}
	}
	printf("%d\n", result);
	return (0);
}
