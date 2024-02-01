#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Function that adds a new node at the beginning
 * @head: A pointer to the first node
 * @str: Input value
 * Return: The address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodex;

	if (str == NULL)
		return (NULL);
	nodex = malloc(sizeof(list_t));
	if (nodex == NULL)
	{
		return (NULL);
	}
	nodex->str = strdup(str);
	if (nodex->str == NULL)
	{
		return (NULL);
	}
	nodex->len = strlen(str);
	nodex->next = *head;

	*head = nodex;
	return (nodex);
}
