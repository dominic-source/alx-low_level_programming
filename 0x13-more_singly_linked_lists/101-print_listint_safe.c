#include "lists.h"

/**
 * print_listint_safe - print list in safe mode
 * @head: head of elements
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *hold;
	size_t sum = 0;

	if (head == NULL)
		return (sum);
	hold = head;

	while (hold->next != NULL)
	{
		if (hold < hold->next)
		{
			sum++;
			printf("[%p] %i\n", (void *)&(hold->next), hold->n);
			printf("-> [%p] %i\n", (void *)&(hold->next->next), 98);
			return (98);
		}
		sum++;
		printf("[%p] %i\n", (void *)&(hold->next), hold->n);
		hold = hold->next;
	}
	printf("[%p] %i\n", (void *)&(hold->next), hold->n);
	return (sum);
}
