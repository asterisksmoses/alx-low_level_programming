#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Function that prints the elements of a linked list
 * @h: Input value
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t xy;

	while (h)
	{
		xy++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (xy);
}
