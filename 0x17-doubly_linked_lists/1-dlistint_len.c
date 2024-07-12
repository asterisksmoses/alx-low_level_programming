#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - This function returns the number of
 * elements in a linked dlistint_t list.
 * @h: The head pointer to the linked list
 * Return: The number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t no_of_elements = 0;

	if (h == NULL)
	{
		return (0);
	}
	current = h;

	while (current != NULL)
	{
		no_of_elements++;
		current = current->next;
	}

	return (no_of_elements);
}
