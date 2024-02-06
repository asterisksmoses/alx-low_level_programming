#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in
 * a linked list
 * @h: A pointer to the first linked list
 * Return: The number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t res = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		res++;
	}
	return (res);
}
