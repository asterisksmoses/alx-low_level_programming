#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - Function that adds a new node at the beginningof a list_t
 * list
 * @head: The first linked list
 * @str: The string to be added to the node
 * Return: The address if the new list, otherwise null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *vicc;
	int lenx = 0;

	vicc = malloc(sizeof(list_t));
	if (vicc == NULL)
	{
		return (NULL);
	}
	while (str[lenx])
	{
		lenx++;
	}

	vicc->len = lenx;
	vicc->str = strdup(str);
	vicc->next = *head;
	*head = vicc;
	return (vicc);
}
