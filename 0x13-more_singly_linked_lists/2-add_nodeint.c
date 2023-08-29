#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Function that adds a new node at the beginning
 * of the listint_t list
 * @head: The pointer to the first node
 * @n: The integer input value
 * Return: Address of new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
