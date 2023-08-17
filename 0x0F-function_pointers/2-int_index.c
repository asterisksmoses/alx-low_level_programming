#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: The array
 * @size: The number of elements used in the array
 * @cmp: A pointer to the function
 * Return: If no element matches or when size is less than 0 return -1
 * Otherwise return the index of th first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index1;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (index1 = 0; index1 < size; index1++)
	{
		if (cmp(array[index1]) != 0)
		{
			return (index1);
		}
	}
	return (-1);
}
