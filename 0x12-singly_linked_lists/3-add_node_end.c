#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Function that adds a node at the end of a linked list
 * @head: A pointer to the first node
 * @str: Input value
 * Return: The address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodex, *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	nodex = malloc(sizeof(list_t));

	nodex->str = strdup(str);
	if (nodex == NULL)
	{
		return (NULL);
	}

	nodex->len = strlen(str);
	if (*head == NULL)
	{
		*head = nodex;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nodex;
	}
	return (nodex);
}
