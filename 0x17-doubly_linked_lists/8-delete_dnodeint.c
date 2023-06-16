#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: the head
 * @index: index of node to delete
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *del;
	unsigned int i;

	if (current == NULL || head == NULL)
		return (-1);
	else if (index == 0 && current->next == NULL)
	{
		free(current);
		*head = NULL;
		return (1);
	}
	else if (index == 0 && current != NULL)
	{
		del = current;
		current->next->prev = NULL;
		*head = current->next;
		free(del);
		return (1);
	}
	else if (index > 0)
	{
		for (i = 0; i < (index - 1) && current != NULL; i++)
			current = current->next;
		if (current == NULL && index > i)
			return (-1);
		del = current->next;
		current->next = current->next->next != NULL ? current->next->next : NULL;
		if (current->next != NULL)
			current->next->prev = current;
		free(del);
		return (1);
	}
	return (-1);
}
