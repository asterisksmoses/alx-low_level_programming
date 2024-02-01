#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * @h: A pointer to the linked list
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t result = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		result++;
	}
	return (result);
}
