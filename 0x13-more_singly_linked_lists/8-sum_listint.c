#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: A pointer to the first node
 * Return: The sum of all the data
 */

int sum_listint(listint_t *head)
{
	int count = 0;
	listint_t *temp = head;

	if (head == NULL)
	{
		return (0);
	}
	while (temp->next != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
