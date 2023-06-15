#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - free linked list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int i;

	for (i = 0; head != NULL; i++)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
