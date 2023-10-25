#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data
 * of a linked list
 * @head: A pointer to the linked list
 * Return: 0 each time
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
