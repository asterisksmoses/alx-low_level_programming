#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: A pointer to the first node
 * Return: The final sum of the addition otherwise return 0 if
 * the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *tempnode = head;
	int sum = 0;

	while (tempnode)
	{
		sum += tempnode->n;
		tempnode = tempnode->next;
	}
	return (sum);
}
