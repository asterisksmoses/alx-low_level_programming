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
	list_t *code, *modd;
	size_t x;

	code = malloc(sizeof(list_t));
	if (code == NULL)
	{
		return (NULL);
	}

	code->str = strdup(str);

	for (x = 0; str[x]; x++)
		;
	code->len = x;
	code->next = NULL;
	modd = *head;

	if (modd == NULL)
	{
		*head = code;
	}
	else
	{
		while (modd->next != NULL)
			modd = modd->next;
		modd->next = code;
	}
	return (*head);
}
