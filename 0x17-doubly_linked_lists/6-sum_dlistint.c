#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - This function returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: The first node of the linked list
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int count = 0;
	
	if (head == NULL)
		return (0);
	current = head;

	while (current != NULL)
	{
		count += current->n;
		current = current->next;
	}
	return count;
}
