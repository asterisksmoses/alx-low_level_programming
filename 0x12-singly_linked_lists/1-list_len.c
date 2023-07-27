#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - function that return the number of elements in a linked list_t
 * list
 * @h: an input linked list
 * Return: The number of elements in the input list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
