#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - This function inserts a new node
 * at a given position
 * @h: Apointer to the first node
 * @idx: The position in which the node should be inserted
 * @n: The data for the new node
 * Return: The address of the new node or NULL upon failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_n;
	dlistint_t *temp_node;
	unsigned int sum;

	if (h == NULL)
		return (NULL);

	node_n = malloc(sizeof(dlistint_t));
	if (node_n == NULL)
		return (NULL);

	node_n->n = n;
	temp_node = *h;

	if (idx == 0)
	{
		node_n->prev = NULL;
		node_n->next = temp_node;
		if (temp_node)
			temp_node->prev = node_n;
		*h = node_n;
		return (node_n);
	}

	for (sum = 0; temp_node != NULL && sum < idx - 1; sum++)
		temp_node = temp_node->next;

	if (temp_node == NULL)
	{
		free(node_n);
		return (NULL);
	}
	node_n->prev = temp_node;
	node_n->next = temp_node->next;

	if (temp_node->next)
		temp_node->next->prev = node_n;

	temp_node->next = node_n;

	return (node_n);
}

