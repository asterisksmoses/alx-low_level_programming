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
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = *head;
	while (newnode->next != NULL)
	{
		newnode = newnode->next;
	}
	return (newnode);
}
