#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a listint_t list
 * @head: A pointer to the first node
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *nodex, *nodey;

	nodex = head;
	while (nodex != NULL)
	{
		nodey = nodex->next;
		free(nodex);
		nodex = nodey;
	}
}
