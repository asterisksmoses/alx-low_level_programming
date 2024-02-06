#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints all the elements of
 * a listint_t list
 * @h: A pointer to the first node
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t x = 0;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		x++;
	}
	return (x);
}
