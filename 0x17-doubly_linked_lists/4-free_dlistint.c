#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - This function frees a dlistint_t list.
 * @head: A pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	dlistint_t *temp_node;

	current_node = head;

	while (current_node != NULL)
	{
		temp_node = current_node;
		current_node = current_node->next;
		free(temp_node);
	}
}
