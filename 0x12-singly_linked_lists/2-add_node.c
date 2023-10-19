#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - Function that adds node at the beginning of  a list
 * @head: A pointer to the linked list
 * @str: A pointer to the constant character
 * Return: A pointer to the new node otherwise NULL if
 * it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	node->len = len;
	node->str = strdup(str);
	node->next  = *head;
	*head = node;
	return (node);
}
