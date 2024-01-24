#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Function that executes a function as a given
 * parameter
 * @array: Input value
 * @size: The size of the array
 * @action: A pointer to a function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
