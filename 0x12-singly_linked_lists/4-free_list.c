#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: the initial linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *initial_node;

	while ((initial_node = head) != NULL)
	{
		head = head->next;
		free(initial_node->str);
		free(initial_node);
	}
}
