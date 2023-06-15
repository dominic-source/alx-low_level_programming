#include "lists.h"

/**
 * sum_dlistint - sum the doubly link list
 * @head: the head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;
	int i;

	for (i = 0; current != NULL; i++)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
