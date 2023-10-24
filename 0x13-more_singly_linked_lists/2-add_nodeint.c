#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Function that adds a new node
 * @head: Input value
 * @n: Input value
 * Return:The address of the neww element or NULL if the
 * function fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
