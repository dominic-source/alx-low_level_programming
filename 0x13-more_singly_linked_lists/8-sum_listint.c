#include "lists.h"

/**
 * sum_listint - sum list of integers
 * @head: node to head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *hold;

	hold = head;
	if (head == NULL)
		return (0);
	while (hold != NULL)
	{
		sum += hold->n;
		hold = hold->next;
	}
	return (sum);
}
