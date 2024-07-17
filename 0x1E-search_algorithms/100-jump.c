#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - This function searches for a value in a sorted
 * array of integers
 * @array: A pointer to the first element of the array to search in.
 * @size: The size of the array
 * @value: The value to be searched for in this case
 * Return: The first index where the value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t j;
	size_t l;
	size_t r;
	size_t pr = 0;
	size_t x;

	if (array == NULL)
		return (-1);
	j = (size_t)sqrt(size);
	l = 0;
	r = j;

	while (r < size && array[r] <= value)
	{
		printf("Value checked array[%u] = [%d]\n", 
				(unsigned int)r, array[r]);
		pr = l;
		l = r;
		r += j;
	}

	printf("Value found between indexes [%u] and [%u]\n",
			(unsigned int)pr, (unsigned int)r);
	for (x = pr; x <= r && x < size ; x++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)x,
				array[x]);
		if (array[x] == value)
		{
			printf("Found %d at index: %u\n", value,
					(unsigned int)x);
			return (x);
		}
	}
	return (-1);
}
