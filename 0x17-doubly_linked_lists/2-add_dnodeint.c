#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - add node at the beginning
 * @head: head of the linked list
 * @n: the data to add in the created node
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;

	}
	else
	{
		new->n = n;
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
