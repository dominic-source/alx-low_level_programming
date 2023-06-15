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
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		for (i = 0; current != NULL; i++)
		{
			if (current->next == NULL)
			{
				new->n = n;
				current->next = new;
				new->prev = current;
				new->next = NULL;
			}
			current = current->next;
		}
	}
	return (new);
}
