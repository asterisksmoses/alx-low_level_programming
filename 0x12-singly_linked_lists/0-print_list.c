#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of a list_t
 * @h: A pointer to the structure
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t result = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", current->len, current->str);

		current = current->next;
		result++;
	}
	return (result);
}
