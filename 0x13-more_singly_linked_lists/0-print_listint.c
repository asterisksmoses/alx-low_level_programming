#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Function that prints all the elements of a list
 * @h: The linked list input
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		printf("%d\n", h->n);
		nodes++;
	}
	return (nodes);
}
