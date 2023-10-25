#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t
 * @head: A pointer to the address of the linked list
 * Return: 0 each time
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
