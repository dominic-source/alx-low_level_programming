#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: the head of the linked list
 * @index: the index to get
 * Return: the nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
