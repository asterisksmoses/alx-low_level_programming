#include "lists.h"

/**
 * find_listint_loop - Function that finds a loop in a linked list
 * @head: The head of the linked list
 * Return: THe address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *px;
	listint_t *pre;

	px = head;
	pre = head;

	while (head && px && px->next)
	{
		head = head->next;
		px = px->next->next;

		if (head == px)
		{
			head = pre;
			pre = px;
			while (1)
			{
				px = pre;
				while (px->next != head && px->next != pre)
				{
					px = px->next;
				}
				if (px->next == head)
					break;

				head = head->next;
			}
			return (px->next);
		}
	}
	return (NULL);
}
