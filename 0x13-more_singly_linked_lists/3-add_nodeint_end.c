#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Function that adds new node at the end of a
 * listint_t list
 * @head: A pointer to the adress of the linked list
 * @n: The value for the new node
 * Return: The address of then new element or NULL
 * if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *xy, *ch;

	xy = malloc(sizeof(listint_t));
	if (xy == NULL)
	{
		return (NULL);
	}
	xy->n = n;
	xy->next = NULL;

	if (*head == NULL)
	{
		*head = xy;
	}
	else
	{
		ch = *head;
		while (ch->next != NULL)
			ch = ch->next;
		ch->next = xy;
	}
	return (*head);
}
