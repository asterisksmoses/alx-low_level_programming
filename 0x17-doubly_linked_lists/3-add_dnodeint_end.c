#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - This functon adds a new node at the end
 * of a linked list
 * @head: Is a pointer to the head of the linked list
 * @n: Is the data for the new node to be added
 * Return: The address of the new element or NULL upon failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_n;
	dlistint_t *last_node = *head;

	if (head == NULL)
		return (NULL);

	node_n = malloc(sizeof(dlistint_t));
	if (node_n == NULL)
		return (NULL);

	node_n->n = n;
	node_n->next = NULL;

	if (*head == NULL)
	{
		node_n->prev = NULL;
		*head = node_n;
		return (node_n);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = node_n;
	node_n->prev = last_node;

	return (node_n);
}
