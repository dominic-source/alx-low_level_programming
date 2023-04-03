#include "lists.h"

/**
 * print_listint - print elements of listint_t
 * @h: list of elements
 * Return: size_t node
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *t;

	t = h;
	while (t != NULL)
	{
		printf("%i\n", t->n);
		i++;
		t = t->next;
	}
	return (i);
}
