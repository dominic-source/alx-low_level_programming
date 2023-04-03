#include "lists.h"

/**
 * pop_listint - delete the head
 * @head: head of list
 * Return: the heads node data
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int n;

	if (*head == NULL)
		return (0);
	hold = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(hold);
	return (n);
}
