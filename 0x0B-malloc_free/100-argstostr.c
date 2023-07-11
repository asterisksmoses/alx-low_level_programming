#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: input value
 * @av: input value
 * Return: 0 each time
 */

char *argstostr(int ac, char **av)
{
	int c, d, x = 0, y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d]; c++)
			c++;
	}
	y += ac;

	str = malloc(sizeof(char) * y + 1);
	if (str == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d]; d++)
		{
			str[x] = av[c][d];
			x++;
		}
		if (str[x] == '\0')
		{
			str[x++] = '\n';
		}
	}
	return (str);
}
