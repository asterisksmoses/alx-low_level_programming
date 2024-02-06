#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t
 * @head: A pointer to the first node
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *adj = NULL;

	while (*head != NULL)
	{
		adj = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = adj;
	}
	*head = prev;
	return (*head);
}
