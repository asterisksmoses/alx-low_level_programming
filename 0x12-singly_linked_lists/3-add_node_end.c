#include "lists.h"

/**
 * add_node_end - Function that adds new node at the end of
 * a linked list
 * @head: The initial linked list
 * @str: Input value
 * Return: The address of the new element or NULL if
 * not successful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodex, *nodey;
	size_t x;

	nodex = malloc(sizeof(list_t));
	if (nodex == NULL)
	{
		return (NULL);
	}
	nodex->str = strdup(str);

	for (x = 0; str[x]; x++)

	nodex->len = x;
	nodex->next = NULL;
	nodey = *head;

	if (nodey == NULL)
	{
		*head = nodex;
	}
	else
	{
		while (nodey->next != NULL)
			nodey = nodey->next;
		nodey->next = nodex;
	}
	return (*head);
}
