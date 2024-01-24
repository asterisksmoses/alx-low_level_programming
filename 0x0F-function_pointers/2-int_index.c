#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Input value
 * @size: Number of elements in the array
 * @cmp: Input value
 * Return: The index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
