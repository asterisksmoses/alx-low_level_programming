#include "main.h"
#include <stdio.h>

/**
 * _atoi - function converts a string to be an integer
 * @s: input string value to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int x, y, z, num, c, digit;

	x = 0;
	y = 0;
	z = 0;
	num = 0;
	c = 0;
	digit = 0;

	while (s[num] != '\0')
		num++;
	while (x < num && c == 0)
	{
		if (s[x] == '-')
			y++;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			c = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			c = 0;
		}
		x++;
	}
	if (c == 0)

		return (0);
	return (z);
}

/**
 * main - multiplies two integers
 * @argc: number of arguments
 * @argv: an array of arguments
 * Return: 0 each time 1 if otherwise
 */

int main(int argc, char **argv)
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}

