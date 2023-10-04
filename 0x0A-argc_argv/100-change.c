#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 on success, 1 incase of error
 */

int main(int argc, char *argv[])
{
	int xy, c, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	xy = _atoi(argv[1]);
	res = 0;
	if (xy < 0)
	{
		printf("0\n");
		return (0);
	}
	for (c = 0; c < 5 && xy >= 0; c++)
	{
		while (xy >= coins[c])
		{
			res++;
			xy -= coins[c];
		}
	}
	printf("%d\n", res);
	return (0);
}
