#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - A function that concatenates all the arguments
 * of your program
 * @ac: Input value
 * @av: Input value
 * Return: A pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int x, y;
	int res = 0;
	char *xyz;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		res = res + strlen(av[x]) + 1;
	}
	xyz = malloc((res + 1) * sizeof(char));
	if (xyz == NULL)
		return (NULL);
	for (y = 0; y < ac; y++)
	{
		strcpy(xyz + y, av[x]);
		y = y + strlen(av[x]);
		xyz[y++] = '\n';
	}
	xyz[y - 1] = '\0';
	return (xyz);
}
