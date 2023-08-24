#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - Function that adds a new node at the end of a list_t
 * list
 * @head: The initial linked list
 * @str: The string to be added to the node
 * Return: The address of the nwe element otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *code;
	int lenx = 0;

	code = malloc(sizeof(list_t));
	if (code == NULL)
	{
		return (NULL);
	}
	while (str[lenx])
	{
		lenx++;
	}

	code->len = length;
	code->str = strdup(str);
	code->next = *tail;
	*tail = code;
	return (code);
}
