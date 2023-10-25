#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a linked list
 * @head: Refers to a pointer to the linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while ((temp_node = head) != NULL)
	{
		head = head->next;
		free(temp_node);
	}
}
