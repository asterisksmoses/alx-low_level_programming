#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that inserts a node at a
 * given position
 * @head: A pointer to the first node
 * @idx: Is the index of the listwhere the new node should be
 * added
 * @n: data to be added
 * Return: The address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int x;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (x = 0; current != NULL && x < idx - 1; x++)
		current = current->next;
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
