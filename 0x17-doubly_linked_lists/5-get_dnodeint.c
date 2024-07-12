#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - This function should return the nth
 * node of a linked list.
 * @head: The first node
 * @index: This is the index of the node
 * Return: NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);
	current_node = head;

	while (current_node != NULL && idx < index)
	{
		current_node = current_node->next;
		idx++;
	}

	if (current_node == NULL)
		return (NULL);

	return (current_node);
}
