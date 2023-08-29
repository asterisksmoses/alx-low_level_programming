#include "lists.h"

/**
 * reverse_listint - Function that reserves a listint_t linked list
 * @head: A pointer to the first node
 * Return: A pointer to the first node of the reserved list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *adjnode = NULL;
	listint_t *prevnode = NULL;

	while (*head)
	{
		adjnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = adjnode;
	}
	*head = prevnode;
	return (*head);
}

