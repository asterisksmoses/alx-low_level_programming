#include "lists.h"
#include <stdio.h>

/**
 * free_listp - Function that frees a linked list
 * @head: The head of a linked list
 * Return: Nothing
 */

void free_listp(listp_t **head)
{
	listp_t *tempnode;
	listp_t *currnode;

	if (head != NULL)
	{
		currnode = *head;
		while ((tempnode =currnode) != NULL)
		{
			currnode = currnode->next;
			free(tempnode);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Function that prints a linked list
 * @head: THe head of the linked list
 * Return: Number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *xyz, *cfc, *mod;

	xyz = NULL;
	while (head != NULL)
	{
		cfc = malloc(sizeof(listp_t));

		if (cfc == NULL)
			exit(98);
		cfc->p = (void *)head;
		cfc->next = xyz;
		xyz = cfc;

		mod = xyz;

		while (mod->next != NULL)
		{
			mod = mod->next;

			if (head == mod->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&xyz);
				return (nodes);
			}

		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_listp(&xyz);
	return (nodes);
}
