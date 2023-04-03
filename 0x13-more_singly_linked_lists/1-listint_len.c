#include "lists.h"

/**
 * listint_len - returns the number of element
 * @h: head of the elements
 * Return: length of element
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *t;

	t = h;
	while (t != NULL)
	{
		i++;
		t = t->next;
	}
	return (i);
}
