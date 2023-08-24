#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of
 * a lits_t list
 * @h: Input value
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf(" [0], (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
