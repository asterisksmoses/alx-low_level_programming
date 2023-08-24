#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Function that frees a list_t list
 * @head: Input value
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *modd;

	while ((modd = head) != NULL)
	{
		head = head->next;
		free(modd->str);
		free(modd);
	}
}
