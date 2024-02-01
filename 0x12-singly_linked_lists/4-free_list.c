#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a linked list
 * @head: A pointer to the first node
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
