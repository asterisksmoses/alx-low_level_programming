#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a
 * given position
 * @head: The pointer to the first node
 * @idx: The index of the new list where the new node should be added
 * @n: Input value
 * Return: The new node otherwise 0 if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tempnode = *head;
	listint_t *newnode;
	unsigned int x;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (x = 0; tempnode && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newnode->next = tempnode->next;
			tempnode->next = newnode;
			return (newnode);
		}
		else
			tempnode = tempnode->next;
	}
	return (NULL);
}
