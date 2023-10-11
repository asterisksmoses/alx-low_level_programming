#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: The array to be checked
 * @size: The number of elements in the array
 * @cmp: A pointer to the function
 * Return: An index to the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cs;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
		return (-1);
	for (cs = 0; cs < size; cs++)
	{
		if (cmp(array[cs]) != 0)
			return (cs);
	}
	return (-1);
}
