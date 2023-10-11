#include "function_pointers.h"

/**
 * array_iterator - Function that executes a functionas a parameter
 * on each element of an array
 * @array: An array input
 * @size: The size of the array
 * @action: A function pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
