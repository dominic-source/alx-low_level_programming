#include "lists.h"

/**
 * free_listint - frees a list of listint_t
 * @head: head to free
 */
void free_listint(listint_t *head)
{

	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
	free(head);
}
