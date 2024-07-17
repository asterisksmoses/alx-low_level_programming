#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * exponential_search - This function searches for a value in a
 * sorted array of integers
 * @array: A pointer to the first element of the array in search
 * @size: The number of elements in the array
 * @value: The value in search
 * Return: The first index where the value is located
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

int exponential_search(int *array, size_t size, int value)
{
	size_t x = 1;
	size_t l;
	size_t r;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	while (x < size && array[x] <= value)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)x,
				array[x]);
		x *= 2;
	}
	l = x / 2;
	r = (x < size) ? x : size - 1;
	printf("Value found between indexes [%u] and [%u]\n",
			(unsigned int)l, (unsigned int)r);
	return (binary_search(array + l, r - l + 1, value));
}
