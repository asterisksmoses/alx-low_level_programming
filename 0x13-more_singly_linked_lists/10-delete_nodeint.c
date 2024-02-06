#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes node at index
 * @head: A pointer to the first node
 * @index: Index of the node that should be deleted
 * Return: 1 upon succces, or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_n = *head;
	listint_t *nodex;
	unsigned int x;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp_n->next;
		free(temp_n);
		return (1);
	}
	for (x = 0; temp_n != NULL && x < index - 1; x++)
		temp_n = temp_n->next;
	if (temp_n == NULL || temp_n->next == NULL)
	{
		return (-1);
	}
	nodex = temp_n->next;
	temp_n->next = nodex->next;
	free(nodex);

	return (1);
}
