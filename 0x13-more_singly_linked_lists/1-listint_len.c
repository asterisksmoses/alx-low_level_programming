#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function that returns the number of elements in a
 * linked list
 * @h: Input value
 * Return: The number of elements accrued
 */

size_t listint_len(const listint_t *h)
{
	size_t xy;

	while (h)
	{
		xy++;
		h = h->next;
	}
	return (xy);
}

