#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: The pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tempnode;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tempnode = (*head)->next;
		free(*head);
		*head = tempnode;
	}
	head = NULL;
}
