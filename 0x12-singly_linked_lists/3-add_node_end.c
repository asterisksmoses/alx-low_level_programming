#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Function that adds a new node at the end of a
 * list_t list
 * @head: input value
 * @str: input value
 * Return: the address of the new element or NULL if not successful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *initial_node;
	size_t x;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (x = 0; str[x]; x++)
		;
	new_node->len = x;
	new_node->next = NULL;
	initial_node = *head;

	if (initial_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (initial_node->next != NULL)
			initial_node = initial_node->next;
		initial_node->next = new_node;
	}
	return (*head);
}
