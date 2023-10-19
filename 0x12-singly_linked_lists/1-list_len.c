#include "lists.h"


/**
 * list_len - Function that returns the number of elements in a
 * linked list
 * @h: The linked list to be used
 * Return: The number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t result = 0;

	while (h)
	{
		h = h->next;
		result++;
	}
	return (result);
}
