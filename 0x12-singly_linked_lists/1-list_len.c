#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - Function that returns the number of elements list_t
 * list
 * @h: The linked list
 * Return: The number of elements of a list
 */

size_t list_len(const list_t *h)
{
	size_t counts = 0;

	while (h)
	{
		h = h->next;
		counts++;
	}
	return (counts);
}
