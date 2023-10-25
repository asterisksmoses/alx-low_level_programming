#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints the elements of a linked list
 * @h: Input value
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t result;

	if (h == NULL)
		return (0);
	for (result = 0; h != NULL; result++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (result);
}
