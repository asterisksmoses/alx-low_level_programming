#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - This function searches for a value in a sorted
 * array of integers.
 * @array: Apointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value in search
 * Return: -1 if value is not found in the array or if the
 * array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x;
	size_t l = 0;
	size_t r = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		mid = l + (r - l) / 2;
		printf("Searching in array: ");
		for (x = l; x <= r; x++)
		{
			printf("%d", array[x]);
			if (x < r)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
