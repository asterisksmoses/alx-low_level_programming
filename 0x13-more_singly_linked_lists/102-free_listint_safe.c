#include "lists.h"
/**
 * free_listp2 - Function that frees a linked list
 * @head: The head of the linked list
 * Return: Nothing
 */

void free_listp2(listp_t **head)
{
	listp_t *tempnode;
	listp_t *currnode;

	if (head != NULL)
	{
		currnode = *head;
		while ((tempnode = currnode) != NULL)
		{
			currnode = currnode->next;
			free(tempnode);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - Function that frees a list safely
 * @h: Head of a list
 * Return: Size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodex = 0;
	listp_t *xyz, *cfc, *mod;
	listint_t *currnode;

	xyz = NULL;
	while (*h != NULL)
	{
		cfc = malloc(sizeof(listp_t));

		if (cfc	== NULL)
			exit(98);

		cfc->p = (void *)*h;
		cfc->next = xyz;
		xyz = cfc;

		mod = xyz;

		while (mod->next != NULL)
		{
			mod = mod->next;
			if (*h == mod->p)
			{
				*h = NULL;
				free_listp2(&xyz);
				return (nodex);
			}
		}
		currnode = *h;
		*h = (*h)->next;
		free(currnode);
		nodex++;
	}
	*h = NULL;
	free_listp2(&xyz);
	return (nodex);
}
