#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function that adds a new node at the end
 * of the linked list
 * @head: A pointer to the first node of the linked list
 * @n: data to be added to the linked list
 * Return: The address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodex, *nodey;

	if (head == NULL)
		return (NULL);

	nodex = *head;
	nodey = malloc(sizeof(listint_t));
	nodey->n = n;
	nodey->next = NULL;
	if (nodey == NULL)
	{
		*head = nodey;
	}
	else
	{
		while (nodex->next != NULL)
		{
			nodex = nodex->next;
		}
	nodey->next = nodex;
	}
	return (nodey);
}
