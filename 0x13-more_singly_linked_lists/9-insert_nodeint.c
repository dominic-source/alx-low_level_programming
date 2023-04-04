#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: head node
 * @idx: index to insert node
 * @n: number to insert
 * Return: the address of the newly add node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t **hold;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	hold = head;
	for (i = 0; (i < idx - 1) && hold != NULL; i++)
		hold = &((*hold)->next);
	if (hold == NULL && i < (idx - 1))
		return (NULL);
	new->n = n;
	new->next = (*hold)->next;
	(*hold)->next = new;
	return (new);
}
