#include "lists.h"

/**
 * print_dlistint - print out the doubly link list data
 * @h: the head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i, count = 0;

	current = h;
	for (i = 0; current != NULL; i++)
	{
		count++;
		printf("%i\n", current->n);
		current = current->next;
	}

	return (count);
}
