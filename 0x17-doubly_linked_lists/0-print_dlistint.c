#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dlistint - This function prints all the elements of a dlistint_t list.
 * @h: A head pointer to the linked list itself
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t no_of_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		no_of_nodes++;
		current = current->next;
	}
	return (no_of_nodes);
}
