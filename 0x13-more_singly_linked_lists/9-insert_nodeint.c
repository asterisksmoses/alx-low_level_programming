#include "lists.h"

/**
 * create_new_node - Function that creates new node
 * @n: The value of the node
 * Return: A pointer to the node
 */

listint_t *create_new_node(int n)
{
	listint_t *xy;

	xy = malloc(sizeof(listint_t));
	if (xy == NULL)
	{
		return (NULL);
	}
	xy->n = n;
	xy->next = NULL;

	return (xy);
}

/**
 * insert_nodeint_at_index - Function that inserts a new node at
 * a given position
 * @head: A pointer to the first memory address
 * @idx: The index of the list where the new node should be added
 * @n: Input value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *temp;
	listint_t *xy;
	listint_t *ch;

	temp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	ch = create_new_node(n);
	if (ch == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = ch;
		return (ch);
	}

	if (idx == 0)
		*head = ch;
	for (x = 0; x < idx - 1 && temp != NULL && idx != 0; x++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		ch->next = temp;
	else
	{
		xy = temp->next;
		temp->next = ch;
		ch->next = xy;
	}
	return (ch);
}
