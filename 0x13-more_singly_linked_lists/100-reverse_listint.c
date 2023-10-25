#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list
 * @head: A pointer to the input linked list
 * Return: A pointer to the first node of the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp_x;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		temp_x = (*head)->next;
		(*head)->next = temp;
		temp  = *head;

		if (temp_x == NULL)
			return (*head);

		*head = temp_x;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
