#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 * @name: The name to be printed
 * @f: A pointer to a function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
