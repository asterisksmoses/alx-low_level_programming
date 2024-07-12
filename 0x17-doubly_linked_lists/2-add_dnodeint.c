#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - This function adds a new node at the beginning of a
 * dlistint_t list.
 * @head: the first node of the linked list
 * @n: Is the data of the linked list
 * Return: Return the address of the new element or NULL
 * upon failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_n;

	if (head == NULL)
		return (NULL);

	node_n = malloc(sizeof(dlistint_t));
	if (node_n == NULL)
	{
		return (NULL);
	}

	node_n->n = n;
	node_n->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = node_n;
	}
	*head = node_n;
	return (node_n);
}

