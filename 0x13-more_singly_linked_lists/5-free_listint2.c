#include "lists.h"

/**
 * free_listint2 - frees list and sets head to be zero
 * @head: a pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		hold = (*head)->next;
		(*head)->next = (*head)->next->next;
		free(hold);
	}
	free(*head);
	*head = NULL;
}
