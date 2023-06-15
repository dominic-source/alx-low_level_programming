#include "lists.h"

/**
 * dlistint_len - find the length of the doubly list
 * @h: the head
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i, count = 0;

	current = h;
	for (i = 0; current != NULL; i++)
	{
		count++;
		current = current->next;
	}
	return (count);
}
