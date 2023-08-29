#include "lists.h"

/**
 * delete_nodeint_at_index - Function that dletes a node at index of a
 * linked list
 * @head: The pointer to the first node
 * @index: Index of the node that should be deleted
 * Return: 1 indicating success, 0 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempnode = *head;
	listint_t *currnode = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempnode);
		return (1);
	}
	while (x < index - 1)
	{
		if (!tempnode || !(tempnode->next))
			return (-1);
		tempnode = tempnode->next;
		x++;
	}

	currnode = tempnode->next;
	tempnode->next = currnode->next;
	free(currnode);
	return (1);
}
