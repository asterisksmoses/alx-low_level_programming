#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * in a linked list
 * @h: Input value for the linked list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
