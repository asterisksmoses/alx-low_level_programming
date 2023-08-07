#include <stdio.h>
#include "main.h"

/**
 * _atoi - Function that converts a string to an integer
 * @s: The string to be converted to an integer
 * Return: The int converted from the string
 */

int _atoi(char *s)
{
	int x, y, c, length, z, digit;

	x = 0;
	y = 0;
	c = 0;
	length = 0;
	z = 0;
	digit = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (x < length && z == 0)
	{
		if (s[x] == '-')
		{
			++y;
		}
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			c = c * 10 + digit;
			z = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			z = 0;
		}
		x++;
	}
	if (z == 0)
		return (0);
	return (c);
}

/**
 * main - A function that multiplies two numbers
 * @argc: The number of arguments
 * @argv: The arrays of arguments
 * Return: 0 each time 1 incase of an error
 */

int main(int argc, char *argv[])
{
	int num3;
	int num4;
	int result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num3 = _atoi(argv[1]);
	num4 = _atoi(argv[2]);
	result = num3 * num4;
	printf("%d\n", result);

	return (0);
}
