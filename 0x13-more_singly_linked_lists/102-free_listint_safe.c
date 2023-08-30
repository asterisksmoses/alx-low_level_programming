#include <stdio.h>
#include "lists.h"

size_t looped_listint_length(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_length - Finds the number of nodesin a looped
 * listint_t list
 * @head: A pointer to the first node of the listint_t in check
 * Return: If the list is not looped 0 otherwise the number of nodes
 */

size_t looped_listint_length(const listint_t *head)
{
	const listint_t *sam, *cat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	sam = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (sam == cat)
		{
			sam = head;
			while (sam != cat)
			{
				nodes++;
				sam = sam->next;
				cat = cat->next;
			}
			sam = sam->next;
			while (sam != cat)
			{
				nodes++;
				sam = sam->next;
			}
			return (nodes);
		}

		sam = sam->next;
		cat = (cat->next)->next;
	}
	return (nodes);
}

/**
 * print_listint_safe - Function that prints a listint list safely
 * @head: A pointer to the first node of the linked list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, indx = 0;

	nodes = looped_listint_length(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (indx = 0; indx < nodes; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
