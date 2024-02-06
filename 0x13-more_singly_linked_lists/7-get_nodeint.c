#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a
 * listint_t linked list
 * @head: A pointer to the first node
 * @index: The index of the node
 * Return: The nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *node_t = head;

	while (node_t != NULL)
	{
		if (y == index)
		{
			return (node_t);
		}
		node_t = node_t->next;
		y++;
	}
	return (NULL);
}
