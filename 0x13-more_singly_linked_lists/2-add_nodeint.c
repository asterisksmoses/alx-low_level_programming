#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Function that adds a new node at the
 * beginning of the list
 * @head: A pointer to the first node
 * @n: The data to be included in the linked list
 * Return: The address of the new linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		exit(EXIT_FAILURE);
	}
	current->n = n;
	current->next = *head;
	*head = current;
	return (current);
}
