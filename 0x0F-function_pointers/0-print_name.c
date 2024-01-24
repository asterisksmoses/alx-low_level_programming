#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_name - Function that prints a name
 * @name: The name to be printed
 * @f: Pointer to a function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	char *xy;

	if (name == NULL || f == NULL)
	{
		return;
	}

	xy = malloc(strlen(name) + 1);

	if (xy == NULL)
	{
		return;
	}
	strcpy(xy, name);
	(*f)(xy);

	free(xy);
}
