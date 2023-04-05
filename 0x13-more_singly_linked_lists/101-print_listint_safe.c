#include "lists.h"

/**
 * print_listint_safe - print list in safe mode
 * @head: head of elements
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *hold;
	const listint_t *fast;
	size_t sum = 0;

	hold = head;
	fast = head->next;
	if (head == NULL)
		return (sum);
	if (head == head->next)
	{
		sum++;
		printf("-> [%p] %i\n", (void *)&(head->next), head->n);
		return (98);
	}
	while (hold->next != NULL)
	{
		if (fast == hold)
		{
			sum++;
			printf("-> [%p] %i\n", (void *)&(fast->next), fast->n);
			return (98);
		}
		sum++;
		printf("[%p] %i\n", (void *)&(hold->next), hold->n);
		hold = hold->next;
		if (fast->next != NULL)
			fast = fast->next->next;
	}
	sum++;
	printf("[%p] %i\n", (void *)&(hold->next), hold->n);
	return (sum);
}
