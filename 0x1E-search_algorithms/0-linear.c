#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - This function searches for a value in an array
 * of integers using the linear search algorithm.
 * @array: Is a pointer to the first element in the array
 * @size: This is the size of the array
 * @value: This is the value in search
 * Return: The first index where the value is located or
 * NULL if the value is not present.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%u] = [%d]\n",(unsigned int)x,
				array[x]);
		if (array[x] == value)
		{
			printf("Found %d at index: %u\n",
					value, (unsigned int)x);
			return (x);
		}
	}

	return (-1);
}
