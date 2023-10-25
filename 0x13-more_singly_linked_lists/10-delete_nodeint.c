#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at
 * the index of a linked list
 * @head: A pointer to the linked list
 * @index: The index of the node thst should be deleted
 * Return: 0 each time
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp;
	listint_t *node;

	temp = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	for (x = 0; x < index - 1 && temp != NULL && index != 0; x++)
		temp = temp->next;
	if (temp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		node = temp->next;
		free(temp);
		*head = node;
	}
	else
	{
		if (temp->next == NULL)
		       node = temp->next;
		else
			node = temp->next->next;
		free(temp->next);
		temp->next = node;
	}
	return (-1);
}
