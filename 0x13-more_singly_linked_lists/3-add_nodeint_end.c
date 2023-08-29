#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function that adds a new node at the end
 * of a listint_t list
 * @head: A pointer to the first node
 * @n: Input value
 * Return: The new address of the new element otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);
}
