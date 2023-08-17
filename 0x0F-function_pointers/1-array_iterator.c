#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * on each element of an array
 * @array: The array iterator
 * @size: The size of the array
 * @action: The pointer function to be executed
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
