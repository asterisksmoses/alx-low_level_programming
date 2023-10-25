#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Function that adds new node at the end of a
 * listint_t list
 * @head: A pointer to the adress of the linked list
 * @n: The value for the new node
 * Return: The address of then new element or NULL
 * if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tempnode;

	(void)tempnode;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	tempnode = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = new_node;
	}
	return (*head);
}
