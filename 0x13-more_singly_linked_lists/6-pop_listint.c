#include "lists.h"

/**
 * pop_listint - Function that deletes a list
 * @head: The pointer to the first node
 * Return: The elements of the deleted linked list otherwise if it was
 * empty 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tempnode;
	int xy;

	if (!head || !*head)
	{
		return (0);
	}
	xy = (*head)->n;
	tempnode = (*head)->next;
	free(*head);
	*head = tempnode;

	return (xy);
}
