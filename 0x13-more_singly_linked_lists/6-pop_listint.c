#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node
 * @head: A pointer to the first node
 * Return: The data of the deleted node
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *node_t;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	node_t = *head;
	value = node_t->n;
	*head = (*head)->next;
	free(node_t);
	node_t = NULL;
	return (value);
}
