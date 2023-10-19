#include <stdio.h>
#include "lists.h"

/**
 * free_list - Function that frees a linked list
 * @head: The first node of the linked list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *nodey;

	while ((nodey = head) != NULL)
	{
		head = head->next;
		free(nodey->str);
		free(nodey);
	}
}
