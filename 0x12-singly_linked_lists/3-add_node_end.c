#include "lists.h"
#include <string.h>

/**
 * add_node_end - Function that adds a node at the end of a linked list
 * @head: A pointer to the first node
 * @str: Input value
 * Return: The address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodex;

	if (str == NULL)
	{
		return (NULL);
	}
	nodex = malloc(sizeof(list_t));

	nodex->str = strdup(str);
	if (nodex->str == NULL)
	{
		return (NULL);
	}

	nodex->len = strlen(str);
	nodex->next->next = *head;

	*head = nodex;

	return (nodex);
}
