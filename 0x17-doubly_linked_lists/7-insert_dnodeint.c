#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: the head
 * @idx: the index
 * @n: data to insert
 * Return: new node of NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (current == NULL && idx == 0)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	else if (current == NULL && idx != 0)
		return (NULL);
	else if (idx == 0 && current != NULL)
	{
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		current->prev = new;
		*h = new;
		return (new);
	}
	else if (idx > 0 && current != NULL)
	{
		for (i = 0; (i < idx - 1) && (current != NULL); i++)
			current = current->next;
		if (current == NULL && idx > i)
			return (NULL);
		new->n = n;
		new->next = current->next != NULL ? current->next : NULL;
		new->prev = current;
		if (current->next != NULL)
			current->next->prev = new;
		current->next = new;
		return (new);
	}
	return (NULL);
}
