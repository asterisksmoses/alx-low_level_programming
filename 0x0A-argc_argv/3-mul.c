#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: The input value
 * Return: The resulting int
 */

int _atoi(char *s)
{
	int x, y, z, length, d, value;

	x = 0;
	y = 0;
	z = 0;
	length = 0;
	d = 0;
	value = 0;

	while (s[length] != '\0')
		length++;
	while (x < length && d == 0)
	{
		if (s[x] == '-')
			++d;
		if (s[x] >= '0' && s[x] <= '9')
		{
			value = s[x] - '0';
			if (y % 2)
				value = -value;
			z = z * 10 + value;
			d = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			d = 0;
		}
		x++;
	}
	if (d == 0)
		return (0);
	return (z);
}

/**
 * main - A function that ultiplies two numbers
 * @argc: The number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 on faliure
 */

int main(int argc, char *argv[])
{
	int res, x, y;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = _atoi(argv[0]);
	y = _atoi(argv[1]);
	res = x * y;
	printf("%d\n", res);

	return (0);
}
