#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments of your
 * program
 * @ac: Input value
 * @av: Input value
 * Return: A pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0, f = 0;
	char *cse;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			f++;
	}
	f += ac;

	cse = malloc(sizeof(char) * f + 1);
	if (cse == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			cse[z] = av[x][y];
			z++;
		}
	}
	if (cse[z] == '\0')
	{
		cse[z++] = '\n';
	}
	return (cse);
}

