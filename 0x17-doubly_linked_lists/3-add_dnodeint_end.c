#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of the linked list
 * @head: head of the linked list
 * @n: data to add the list
 * Return: the created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;
	int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		for (i = 0; current->next != NULL; i++)
			current = current->next;
		new->prev = current;
		current->next = new;
	}
	return (new);
}
