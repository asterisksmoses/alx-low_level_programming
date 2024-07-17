#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - This function searches for a value in a
 * sorted array of integers.
 * @array: Is a pointer to the first element of the array.
 * @size: The number of elements in the array
 * @value: The element in search.
 * Return: The first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] -
					array[low])) * (value - array[low]));
		printf("Value checked array[%u] = [%d]\n", (unsigned int)pos,
			array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%u] is out of range\n",
			(unsigned int)high);
	return (-1);
}

