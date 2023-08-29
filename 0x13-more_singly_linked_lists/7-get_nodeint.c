#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a
 * listint_t linked list
 * @head: The pointer to the first node
 * @index: Index of the node starting from 0
 * Return a pointer to the node in search, otherwise return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempnode = head;
	unsigned int x = 0;

	while (tempnode && x < index)
	{
		tempnode = tempnode->next;
		x++;
	}
	return (tempnode ? tempnode : NULL);
}
